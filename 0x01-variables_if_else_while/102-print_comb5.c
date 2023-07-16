#include <stdio.h>
/**
  * main - main function
  *
  * Return: 0 (success)
  */
int main(void)
{

	int n1, n2;
	int n3, n4;

	for (n1 = 0; n1 < 10; n1++)
	{
	for (n2 = 0; n2 < 10; n2++)
	{
	for (n3 = 0; n3 < 10; n3++)
	{
	for (n4 = 0; n4 < 10; n4++)
	{
		if (n1 < n3 || (n1 == n3 && n2 < n4))
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(n3 + '0');
			putchar(n4 + '0');

			if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
