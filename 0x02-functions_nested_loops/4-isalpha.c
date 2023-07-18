#include "main.h"
/**
 * _isalpha - function to check for alphabetic character
 * @c: character to be returned
 * Return: 0 success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
