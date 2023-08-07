#include <stdlib.h>
#include <stdio.h>
/**
 * main - print min no of coins to make change
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int denoms [] = {25, 10, 5, 2, 1};
		int noCoins = sizeof(denoms) / sizeof(denoms[0]);

		int i;
		int count = 0;
		for (i = 0; i < noCoins; i++)
		{
			while (cents >= denoms[i])
			{
				cents -= denoms[i];
				count++;
				
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
