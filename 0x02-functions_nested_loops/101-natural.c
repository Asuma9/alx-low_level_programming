#include "main.h"
#include <stdio.h>
/**
 * main - program to print the sum of multiples of 3 or 5 below 1024
 * Return: 0 success
 */
int main(void)
{
	int i, z;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);

}
