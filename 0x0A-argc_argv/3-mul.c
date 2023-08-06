#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success, 1 (if error)
 */
int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	prod = n1 * n2;
	printf("%d\n", prod);

	return (0);

}
