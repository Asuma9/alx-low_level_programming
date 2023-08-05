#!/bin/bash
#include "main.h"
/**
 * _puts - fucntion that prints a string followed by new line to stdout
 * @str: pointer to be printed
 * Return: void
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
