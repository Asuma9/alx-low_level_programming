#include "main.h"
/**
  * _print_last_digit - program to print the last digit
  * @m: value to be printed
  * Return: 0 success
  */

int print_last_digit(int m)
{
	int k;

	k = m % 10;
	if (m < 0)
		k = -k;
	_putchar('0' + k);
	return (k);
}
