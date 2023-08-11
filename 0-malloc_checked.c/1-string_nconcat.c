#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory bytes
 * Return: NULL (empty string or fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *nmem;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	nmem = malloc(len1 + n + 1 * sizeof(n));
	if (nmem == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nmem[i] = s1[i];

	for (i = 0; i < n; i++)
		nmem[len1 + i] = s2[i];

	nmem[len1 + i] = '\0';
	return (nmem);
}
