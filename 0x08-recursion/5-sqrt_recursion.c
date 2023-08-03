#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function to get sqrt
 * @n: number to get sqrt of
 * Return: 0 always
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find the natural
 * of a number
 * @n: nuumber to calculator sqrt of
 * @i: iterator
 * Return: sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
