#include <stdlib.h>
#include "main.h"
/**
 * void *_realloc - reallocates memory using malloc and free
 * @ptr: pointer to memory to be reallocated
 * @old_size: existing memory
 * @new_size: new memory to be created
 * Return: NULL (empty), ptr (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int least_size;
	void *dest_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	dest_ptr = malloc(new_size);
	if (dest_ptr == NULL)
		return (NULL); /*Allocation fail*/

	least_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < least_size; i++)
		*((char *)dest_ptr + i) = *((char *)ptr + i);
	free(ptr);
	return (dest_ptr);
}
