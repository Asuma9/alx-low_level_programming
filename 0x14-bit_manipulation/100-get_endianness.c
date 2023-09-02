#include "main.h"
/**
 **get_endianness - function checks endianness
 **void: takes no argument
 **Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int i = 0;
	char *c;

	c = (char *) &i; /* point to the first byte of int i */

	if (*c == 1) /* 1st byte looks like 0x01 */
	{
		return (1);
	}
	else /* 1st byte looks like 0x00 */
		return (0);

}
