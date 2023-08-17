#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterrates through an array
 * @array: array of pointers
 * @size: size of the array
 * @action: pointer to function
 * Return: 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
