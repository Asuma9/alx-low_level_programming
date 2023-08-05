#!/bin/bash
#include "main.h"
/**
 * _strlen - count string length
 * @s: string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
