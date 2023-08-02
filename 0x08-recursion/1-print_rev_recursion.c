#include "main.h"
/**
 * _print_rev_recursion - entry
 * @s: string to be printed
 * Return: 0 always
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
