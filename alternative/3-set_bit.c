#include "main.h"
/**
 **set_bit - sets value of bit to 1 at given index
 **@n: int pointer to bit to be set to 1
 **@index: index position of bit to be set to 1
 **Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	bit = 1;
	*n = *n | (bit << index);

	return (1);
}
