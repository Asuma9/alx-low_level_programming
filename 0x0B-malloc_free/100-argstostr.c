#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * *argstostr - concatenates all the arguments of your prg
 * @ac: arguments counter
 * @av: pointer to array of arguments
 * Return: NULL if empty
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *con_str;
	int offset = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	/* calculate total length */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	len += ac + 1;
	/* allocating total mem  for all arguments */

	con_str = (char *)malloc(len + 1 * sizeof(char));
	if (con_str == NULL)
		return (NULL);

	/* Concatenating the arguments with the newline chars */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			con_str[offset] = av[i][j];
			offset++;
		}
		if (con_str[offset] == '\0')
		{
			con_str[offset] = '\n';
			offset++;
		}
	}
	return (con_str);
}
