#ifndef MAIN_H
#define MAIN_H

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/* Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Additional libs */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);

/* helper prototypes */
int _strlen(char *s);
void elf_entry(const unsigned char *src, size_t bit_mode, int big_endian);
void elf_type(const unsigned char *head, int big_endian);
void elf_abivers(const unsigned char *head);
void elf_osabi(const unsigned char *head);
void elf_version(const unsigned char *head);
int elf_data(const unsigned char *head);
size_t elf_class(const unsigned char *head);
void elf_magic(const unsigned char *head);
void _read(int filedes, char *dest, size_t count);
void _close(int filedes);
int _strncmp(const char *s1, const char *s2, size_t n);


#endif /* MAIN_H */
