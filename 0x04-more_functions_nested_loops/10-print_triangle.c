#include "main.h"
/**
 * print_triangle - function to print triangle
 * @size: character to be printed
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, hashes,spaces;

		for (row = 1; row <= size; row++)
		{
			for (spaces = size -row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <=row; hashes++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
