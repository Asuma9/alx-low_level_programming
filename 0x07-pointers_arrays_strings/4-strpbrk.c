#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of aset of bytes
 * @s: string 1
 * @accept: string 2
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
