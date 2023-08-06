#include "main.h"
/**
 * *_memset - Function to fill memory with a  constant byte
 * @s: pointer
 * @b: character
 * @n: parameter
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
