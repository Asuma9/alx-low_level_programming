#!/bin/bash
#include <stdio.h>
#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: parameter to be tested
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
