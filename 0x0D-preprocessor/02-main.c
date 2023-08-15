/**
 * main - prints file from which prog was compiled from
 * Return: 0 (success)
 */

#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
