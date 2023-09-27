#include "main.h"
/**
 **print_binary - prints binary reps of a number
 **@n: number to be reps in bin
 **Return: no in binary
 */
void print_binary(unsigned long int n)
{
	int bin_print, pos;
	unsigned long int bin;

	bin_print = 0; /* initialize print signal to 0 */

	for (pos = 63; pos >= 0; pos--) /* bit loop count 4 a 64-bit */
	{
		bin = (n >> pos) & 1; /* store indiv binary digits 4rm log arg AND*/

		if (bin == 1) /* check if log arg AND is 1 */
		{
			bin_print = 1; /* signal 2 start printing bin nos */
		}

		if (bin_print == 1)
		{
			_putchar(((n >> pos) & 1) + '0'); /* extract & print bit at pos*/
							  /* convert it to its ascii char rep */
		}
	}
	if (n == 0)
		_putchar('0');
}
