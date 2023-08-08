#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a * to newly allocated space in mem which
 * contains a copy of the string given as a parameter
 * @str: string passed
 * Return: NULL (fail) 0 success
 */
char *_strdup(char *str)
{
	int i;
	char *mem;

	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	mem = (char *)malloc(len + 1 * sizeof(char));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		mem[i] = str[i];
	}
	return (mem);

}
