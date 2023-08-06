#include "main.h"
#include <stdio.h>
/**
 * is_digit - check if a digit exists in astring
 * @s: character to be passed
 *
 * Return: 0 sucess
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - adds two postive integers
 * @argc: number of argumenets
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!is_digit(argv[num1][num2]) && !(num2 == 0 && argv[num1][num2] == '-'))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum = sum + _atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}

