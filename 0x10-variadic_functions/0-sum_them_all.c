#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its params
 * @n: number of params
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list pars;

	if (n == 0)
		return (0);

	va_start(pars, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pars, int);
	}
	
	va_end(pars);

	return (sum);
}
