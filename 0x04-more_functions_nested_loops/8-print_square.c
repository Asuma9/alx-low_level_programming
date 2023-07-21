#include "main.h"
/**
 * print_square - function to print a square
 * @size: parameter to be tested
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
