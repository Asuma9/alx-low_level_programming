#include "lists.h"
/**
 * pre_main - prints given string before main fxn
 * Return: void  success
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow");
	printf(", \nI bore my house upon my back!\n");
}
