#include "main.h"
/**
 * _islower - Program to check lowercase alphabet
 * @c: character to be returned
 * Return: 0 success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
