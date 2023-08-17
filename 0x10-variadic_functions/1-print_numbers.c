#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints nos followed by a new line
 * @separator: str pointer btn numbers
 * @n: numbers of ints passed
 * Return: 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int x = 0;

	va_start(nums, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%d", x); /* print actual number x */
		if (i < n - 1)
			printf("%s", separator); /* print sep after no */
	}
	printf("\n"); /* print new line char after printing all nos */
	va_end(nums);



}
