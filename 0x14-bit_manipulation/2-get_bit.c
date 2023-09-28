#include "main.h"
/**
 * get_bit - return value of bit at given index
 * @n: bit to be explored
 * @index: index of bit to be returned
 * Return: index bit value success, -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0 && index < 64)
		return (0);

	for (count = 0; count < 64; n >>= 1, count++)
	{
		if (count == index)
			return (n & 1);
	}
	return (-1);

}
