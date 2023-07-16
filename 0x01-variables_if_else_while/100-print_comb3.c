#include <stdio.h>
/**
  * main - main function
  *
  * Return: 0 always
  */
int main(void)
{

	int n1;

	for (n1 = 0; n1 < 10; n1++)
	{
		int n2;

		for (n2 = 0; n2 < 10; n2++)
		{
			if (n1 != n2 && n1 < n2)
			{
			putchar('0' + n1);
			putchar('0' + n2);
			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
