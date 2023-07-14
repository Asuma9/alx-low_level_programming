#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Program to print the alphabet in lower case except q and e
  *
  * return 0 - (successful)
  */
int main(void)
{
	char i;

	for (i = "a"; i <= "z"; i++)
	{
		if (i != "e" && i != "q")
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
