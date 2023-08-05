#!/bin/bash
#include "main.h"
/**
 * _isalpha - function to print an alphabet
 * @c: character to be created
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

