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
	int i, n;
	char *con_str;
	int offset = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	/* calculate total length */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}

	len += ac;
	/* allocating total mem  for all arguments */

	con_str = malloc(sizeof(char) * 1 + 1);
	if (con_str == NULL)
		return (NULL);

	/* Concatenating the arguments with the newline chars */

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			con_str[offset] = av[i][n];
			offset++;
		}
		if (con_str[offset] == '\0')
		{
			con_str[offset++] = '\n';
		}
	}
	return (con_str);
}
