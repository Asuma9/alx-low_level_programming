#include "main.h"
/**
 **flip_bits - returns no of bits to flip to get 4rm a no to next
 **@n: integer no 1
 **@m: integer no 2
 **Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_bit;
	unsigned long int sum_bit;

	sum_bit = 0;
	xor_bit = n ^ m;

	while (xor_bit)
	{
		sum_bit += xor_bit & 1;
		xor_bit = xor_bit >> 1;
	}

	return (sum_bit);
}
