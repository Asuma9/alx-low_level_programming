#include <stdio.h>
/**
  * main - main function
  *
  * Return: 0 (success)
  */
int main(void)
{
	int pa;

	for (pa = 'a'; pa <= 'z'; pa++)
		putchar(pa);
	for (pa = 'A'; pa <= 'Z'; pa++)
		putchar(pa);
	putchar('\n');
	return (0);
}
