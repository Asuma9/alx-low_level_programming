#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: integer for memory allocation
 * Return: pointer to meory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
