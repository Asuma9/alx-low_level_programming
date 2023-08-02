#include "main.h"
/**
 * factorial - function to get factorial
 * @n: integer n
 * Return: 0 always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
