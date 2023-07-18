#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Program to print alphabet  times
 *
 * Return: 0 (uccess)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	 _putchar('\n');
	}
}
