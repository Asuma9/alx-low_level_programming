#include "main.h"
#include <stdio.h>
/**
 * main - program to return the length string
 * Return: 0 always
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
