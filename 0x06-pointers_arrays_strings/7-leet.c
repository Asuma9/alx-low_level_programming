#include "main.h"
/**
 * leet - function to encode a string into 1337
 * @s: Pointer string
 * Return: 0 always
 */
char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlT";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
