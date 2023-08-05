#!/bin/bash
#include "main.h"
/**
 * *_memcpy - function that copies memory form src to dest
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: 0 always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
