#include <unistd.h>
/**
 *_putchar - prints a char c to stout
 * @c: character to be printed
 * Return: 1 on success
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
