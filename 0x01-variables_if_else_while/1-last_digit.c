#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Prints the last digigt of a randomly generated number
  * and it is greater than 5, less than 6, or 0.
  *
  * Return: Always 0 (success).
  */

int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0", n, p);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0",     n, p);
	}
	return (0);
}

