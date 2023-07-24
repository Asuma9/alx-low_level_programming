#include "main.h"
/**
 * _strlen - function that prints length of a string
 * @s: string to be measured
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
