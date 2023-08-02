#include "main.h"
/**
 * _strlen_recursion - get length of string
 * @s: string to get its length
 * Return: 0 always
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
