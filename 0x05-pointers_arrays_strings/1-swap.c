#include "main.h"
/**
 * swap_int - function to swap two integers
 * @a: character 1 to be swapped
 * @b: character 2 to be swapped
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
