#include "main.h"
/**
 **_putchar - writes a char c to std output
 **@c: charater to be printed
 **Return: void
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
