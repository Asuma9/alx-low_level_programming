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
	int i = 0;
	char *s;
	char *sep = "";
	va_list types;

	va_start(types, format);

	if (format[i] != '\0')
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(types, int));
					break;
				case 'i':
					printf("%s%d", sep,  va_arg(types, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(types, double));
					break;
				case 's':
					s = va_arg(types, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(types);
}
