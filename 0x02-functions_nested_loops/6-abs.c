#include "main.h"
/**
 * _abs - program to return an absolute value
 * @b: value to be returned
 * Return: 0 success
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);
	else
		return (b);
}
