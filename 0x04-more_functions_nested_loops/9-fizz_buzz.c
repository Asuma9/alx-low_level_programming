#include <stdio.h>
/**
 * main - program to print nos. 1 to 100 with multiples of 3-fizz
 * multiples of 5-buzz & multiples of both-fizzbuzz
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i != 0)
			printf(" ");
	}
	printf("\n");
	return (0);
}
