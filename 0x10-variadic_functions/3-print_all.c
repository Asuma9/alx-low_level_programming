#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of passed types
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int all_count;
	char c;
	int i;
	float f;
	char *s;
	va_list all;

	va_start(all, format);

	all_count = 0;
		while (format[all_count] != '\0')
	{
		switch (format[all_count])
		{
			case 'c':
				c = (char)va_arg(all, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(all, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		all_count++;
	}
	va_end(all);
	printf("\n");
}
