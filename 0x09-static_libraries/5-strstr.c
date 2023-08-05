#include <stddef.h>
#include "main.h"
/**
 * *_strstr - function to locate a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
