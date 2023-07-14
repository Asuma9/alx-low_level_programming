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
	char low, e, q;

	e = "e";
	q = "q";

	for low(low = "a"' low <= "z"; low++)
	{
		if (low != e && low !=q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
