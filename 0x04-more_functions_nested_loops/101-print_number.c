#include "main.h"
/**
 * print_number - function to print an integer
 * @n: parameter to be passed
 * Return: void
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
