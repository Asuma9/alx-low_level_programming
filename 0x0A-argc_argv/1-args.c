#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * @argc: count of arguments
 * @argv: array of arguuments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv; /* ignore arg*/
	printf("%d\n", argc - 1);
	return (0);
}
