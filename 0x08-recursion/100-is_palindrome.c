#include "main.h"
int check_pal(char *s, int i, int count);
/**
 * is_palindrome - establishes if string is empty
 * @s: string to be tested
 * Return: 1 if string is empty, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *_strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character recursively for a
 * palindrome
 * @s: string to evaluate
 * @i: iterating variable
 * @count: string length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int count)
{
	if (*(s + i) != *(s + count - 1))
		return (0);
	if (i >= count)
		return (1);
	return (check_pal(s, i + 1, count - 1));
}
