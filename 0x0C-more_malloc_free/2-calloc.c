#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - assigns memory for an array using 2 arguments
 * @nmemb: number of blocks to be allocated memory
 * @size: size of the blocks created
 * Return: NULL (nmemb or size = 0)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (calloc(nmemb, size));

}
