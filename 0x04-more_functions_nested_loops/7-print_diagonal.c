#include "main.h"
/**
 * print_diagonal- function to draw diagonal line
 * @n: character to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}

}
