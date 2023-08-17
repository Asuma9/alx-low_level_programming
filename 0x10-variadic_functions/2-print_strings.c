#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separator btn strings
 * @n: number of strings to be printed
 * Return: 0 success, nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list str;

	if (separator == NULL)
		return;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, const char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(str);

	printf("\n");
}
