#!/bin/bash
#include "main.h"
/**
 * _isdigit - to print digits
 * @c: parameter to test
 * Return: 0 always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
