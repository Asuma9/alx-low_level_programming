#include "main.h"
#include <stdio.h>
/**
 * main - program to reverse a string
 * Return: 0 always
 */


int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);

}
