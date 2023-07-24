#include "main.h"
/**
 * _puts - fucntion that prints a string followed by new line to stdout
 * @str: pointer to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
