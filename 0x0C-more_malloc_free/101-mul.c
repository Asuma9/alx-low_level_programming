#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * is_digit - takes string arguments and checks for digits
 * between 0 and 9
 * @str: string to be checked
 * Return: False (char), True (digit)
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - determ string length
 * @str: string to determine length for
 * Return: string lenght
 */
int _strlen(char *str)
{
	int i;
	
	while (str[i] != '\0')
		i++;
	return (1);
}

/**
 * errors - error handling for the main function
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - to multiply 2 postive integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success, 1 (if error)
 */
int main(int argc, char *argv[])
{
	
	char *str1, *str2;
	int n1, n2, *mem_alloc, len1, len2, i, total_len, carry, b = 0;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();

	len1 = _strlen(str1);
	len2 = _strlen(str2);

	total_len = len1 + len2 + 1;

	mem_alloc = malloc(sizeof(int) * total_len);
	if (!mem_alloc)
			return (1);

	for (i = 0; i <= len1 + len2; i++)
		mem_alloc[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		n1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			n2 = str2[len2] - '0';
			carry += mem_alloc[len1 + len2 + 1] + (n1 * n2);
			mem_alloc[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			mem_alloc[len1 + len2 +1] += carry;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (mem_alloc[i])
			b = 1;
		if (b)
			_putchar(mem_alloc[i] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(mem_alloc);
	return (0);
}
