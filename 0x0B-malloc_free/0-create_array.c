#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array and initializes with a specific char
 * @size: size of array
 * @c: character to be passed
 * Return: 0 (success) NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrc;

	if (size == 0)
		return (NULL);

	arrc = (char *)malloc(size * sizeof(char));

	if (arrc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arrc[i] = c;
	}
	return (arrc);

}
