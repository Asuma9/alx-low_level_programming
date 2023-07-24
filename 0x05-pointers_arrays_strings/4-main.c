#include "main.h"
/**
 * main - program to print a string in reverse followed by a new line
 * Return: 0 void
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
