#include "main.h"
#include <stdio.h>
/**
 * main - program to copy string pointed by one pointer to destination
 * pointed to by another pointer
 * Return: pointer to the destination
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
