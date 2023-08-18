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
	/*int all_count;*/
	char c;
	int i;
	float f;
	int num;
	char *s;
	va_list all;

	va_start(all, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(all, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(all, int);
			printf("%d", num);
		}else if (format[i] == 'f')
		{
			f = (float)va_arg(all, double);
			printf("%f", f);
		}else if (format[i] == 's')
		{
			s = va_arg(all, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}else
			{
				printf("%s", s);
			}
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
