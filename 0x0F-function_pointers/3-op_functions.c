#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns sum of a & b
 * @a: par1 input
 * @b: par2 input
 * Return: sum (op_add int)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a & b
 * @a: par1
 * @b: par2
 * Return: 0 success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a & b
 * @a: par1
 * @b: par2
 * Return: 0 success
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns div of a & b
 * @a: par1
 * @b: par2
 * Return: 0 success
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - returns modulus of a & b
 * @a: par1
 * @b: par2
 * Return: 0 success
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
