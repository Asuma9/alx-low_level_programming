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
	int i;
	char *con_str;
	int offset = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	
	/* calculate total length */
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i] + 1); /* new line char*/
	}
	/* allocating total mem  for all arguments */

	con_str = (char *)malloc(len + ac * sizeof(char));
	if (con_str == NULL)
		return (NULL);

	/* Concatenating the arguments with the newline chars */
	
	for (i = 0; i < ac; i++)
	{
		strcpy(con_str + offset, av[i]);
		offset += strlen(av[i] + 1);
		con_str[offset] = '\n';
		offset++;
	}

	/* Null-terminating the concatenated string */
	con_str[offset - 1] = '\0';
	return (con_str);
}
