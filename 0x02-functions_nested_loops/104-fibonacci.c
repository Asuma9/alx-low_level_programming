#include <stdio.h>
/**
 * main - Program that prints 98 Fibonacci numbers starting at 1
 * Return: 0 success
 */
int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", term1);
	printf("%lu, ", term2);
	for (i = 2; i <= 98; i++)
	{
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 98)
			printf("%lu, ", next);
		else
			printf("%lu", next);

	}
	printf("\n");
	return (0);
}
