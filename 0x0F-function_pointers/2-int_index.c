#include "function_pointers.h"
/**
 * int_index - return an index of the 1st elements
 * @array: array of elements
 * @size: number of elemnts of the array
 * @cmp: pointer function argument
 * Return: 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
