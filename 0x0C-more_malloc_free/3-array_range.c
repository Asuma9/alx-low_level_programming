#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: number of block of mem to be created
 * @max: block size
 * Return: NULL (min>max)
 */
int *array_range(int min, int max)
{
	int i;
	int *pt_array;
	int no_elements;

	if (min > max)
		return (NULL);

	/*calculate no of elements in the range*/
	no_elements = max - min + 1;

	/*Allocate memory space for the pointer array*/
	pt_array = malloc(sizeof(int) * no_elements);

	if (pt_array != NULL)
	{
		/*Populate the pointer array with values from min to max*/
		for (i = 0; i < no_elements; i++)
			pt_array[i] = min + i;
	}
	return (pt_array);
}
