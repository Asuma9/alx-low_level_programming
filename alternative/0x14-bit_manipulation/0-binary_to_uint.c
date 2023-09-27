#include "main.h"
/**
 **binary_to_uint - converts  a binary no to unsig int
 **@b: number to be converted
 **Return: 1 success
 */
unsigned int binary_to_uint(const char *b)
{
	int count, j;
	unsigned int sum_bin;

	sum_bin = 0;

	if (b == NULL)
	{
		return (sum_bin); /* check if b is empty */
	}

	count  = _strlen(b); /* keep track no of digits b points to */
	for (j = count - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1') /* check if b points to bin no */
			return (0);
		sum_bin += (b[j] - '0') * power(2, count - j - 1);
	}
	return (sum_bin);
}
/**
 **_strlen - counts modified lenght of string
 **@s: const string to be modified
 **Return: modified string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 **power - prints base int exponetial
 **@base: input base
 **@exp: input exponent
 **Return: exponent of int
 */
int power(int base, int exp)
{
	int j, num_exp;

	num_exp = 1;

	for (j = 0; j < exp; j++)
		num_exp *= base;
	return (num_exp);
}
