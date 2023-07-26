#include "main.h"
/**
 * reverse_array - function to reverse content of an array of integers
 * @a: parameter to be passed
 * @n: parameter 2
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int temp, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		temp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = temp;
		begin++;
		end--;
	}
}
