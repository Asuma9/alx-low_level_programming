#!/bin/bash
#include "main.h"
/**
 * _isupper - to capitalise alphabets
 * @c: character to test
 * Return: 0 always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
