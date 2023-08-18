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
	va_list nums;
	unsigned int i;


	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int)); /* print actual number x */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator); /* print sep after no */
	}
	printf("\n"); /* print new line char after printing all nos */
	va_end(nums);



}
