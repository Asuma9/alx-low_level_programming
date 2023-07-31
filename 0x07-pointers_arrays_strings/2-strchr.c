#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: character string
 * @c: parameter
 * Return: s or NULL always
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
