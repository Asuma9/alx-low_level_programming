#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL (fail) 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conm;
	int len1;
	int len2;

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

	conm = (char *)malloc(len1 + len2 + 1 * sizeof(char));
	if (conm == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conm[i] = s1[i];
	for (j = 0; j < len2; j++)
		conm[i + j] = s2[j];
	conm[i + j] = '\0';
	return (conm);
}
