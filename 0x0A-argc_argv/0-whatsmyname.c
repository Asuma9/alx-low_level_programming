#include "main.h"
#include <stdio.h>
/**
 * main - function to print a its name followed with new line
 * @argc: arguments count
 * @argv: array vector
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
