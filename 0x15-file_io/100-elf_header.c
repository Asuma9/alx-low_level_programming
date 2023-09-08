#include "main.h"
/**
 **main - displays info contained in ELF h at start of ELF file
 **@argc: number of arguments
 **@argv: array of arguments
 **Return: 98 if elf not found
 */
int main(int argc, const char *argv[])
{
	int big_endian, filedes;
	unsigned char buffer[18];
	unsigned int bit_mode;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	filedes = open(argv[1], O_RDONLY);
	if (filedes == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(filedes, (char *)buffer, 18);

	/* calling for ELF parsing functions */
	elf_magic(buffer);
	bit_mode = elf_class(buffer);
	big_endian = elf_data(buffer);
	elf_version(buffer);
	elf_osabi(buffer);
	elf_abivers(buffer);
	elf_type(buffer, big_endian);

	lseek(filedes, 24, SEEK_SET);
	_read(filedes, (char *)buffer, bit_mode / 8);

	/* other related ELF parsing functions */
	elf_entry(buffer, bit_mode, big_endian);

	_close(filedes);

	return (0);
}
/**
 **elf_magic - prints elf magic no
 **@buffer: elf header
 */
void elf_magic(const unsigned char *buffer)
{
	unsigned int i;

	if (_strncmp((const char *)buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n MAGIC: ");

	for (i = 0; i < 16; i++)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
/**
 **_strncmp - compares 2 strings, s1 & s2
 **@s1: string one
 **@s2: string two
 **@n: max no of bytes compared
 **Return: first n bytes of s1 and s2 that are equal, else non-zero
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	for (; n && *s1 && *s2; --n, ++s2, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}
/**
 **elf_entry - prints entry point address
 **@buffer: input string with entry point address
 **@bit_mode: input bit mode 32 or 64
 **@big_endian: endianness (big endian if not-zero)
 **Return: nothing
 */
void elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
	int address_size = bit_mode / 8;

	printf(" %-34s 0x", "Entry point address:");

	if (big_endian)
	{
		while (address_size && !*(buffer))
			--address_size, ++buffer;

		printf("%x", *buffer & 0xff);

		while (--address_size > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += address_size;

		while (address_size && !*(buffer))
			--address_size;
		printf("%x", *buffer & 0xff);

		while (--address_size > 0)
			printf("%02x", *(--buffer) & 0xff);
	}
	printf("\n");
}
/**
 **elf_type - prints elf type
 **@buffer: elf header
 **@big_endian: endianness (big endian if not zero)
 **Return: nothing
 */
void elf_type(const unsigned char *buffer, int big_endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (shared dynamic object file)",
		"CORE (core file)"
	};

	unsigned int type;

	printf(" %-34s ", "Type:");

	if (big_endian)
		type = 0x100 * buffer[16] + buffer[17];
	else
		type = 0x100 * buffer[17] + buffer[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}
/**
 **elf_abivers - prints ABI version
 **@buffer: Elf header
 **Return: nothing
 */
void elf_abivers(const unsigned char *buffer)
{
	printf(" %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}
/**
 **elf_version - prints Elf version
 **@buffer: Elf header
 **Return: nothing
 */
void elf_version(const unsigned char *buffer)
{
	printf(" %-34s %u\n", "Version", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 **elf_osabi - prints ELF OS/ABI
 **@buffer: Elf header
 **Return: nothing
 */
void elf_osabi(const unsigned char *buffer)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modestro",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies openVOS"
	};
	printf(" %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int)buffer[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
}
/**
 **elf_data - prints Elf data
 **@buffer: ELF header
 **Return: nothing
 */
int elf_data(const unsigned char *buffer)
{
	printf(" %-34s ", "Data:");

	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian");
		return (0);
	}
	printf("Invalid data encoding");
	return (0);
}
/**
 **_close - close filedes, prints error on failure
 **@filedes: file descriptor to be closed
 **Return: nothing
 */
void _close(int filedes)
{
	if (close(filedes) != -1)
		return;
	write(STDERR_FILENO, "Error: can't close filedes\n", 22);
	exit(98);
}
/**
 **_read - reads from file & prints error message upon failure
 **@filedes: filedes to read from
 **@buffer: buffer as output destination
 **@count: track number of bytes read
 **Return: nothing
 */
void _read(int filedes, char *buffer, size_t count)
{
	if (read(filedes, buffer, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(filedes);
	exit(98);
}
/**
 **elf_class - prints the elf class
 **@buffer: elf header
 **Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *buffer)
{
	printf(" %-34s ", "class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}

