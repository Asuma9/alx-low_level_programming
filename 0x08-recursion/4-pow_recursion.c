#include "main.h"
/**
 * _pow_recursion - function to print power
 * @x: base
 * @y: power
 * Return: 0 always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
