#include "main.h"
/**
  * cap_string - function to capitalize all words of a string
  * @s: String character to capitalize
  * Return: 0 always
  */

char *cap_string(char *s)
{
	int i =0;
	/*int a = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};*/

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i - 1] == 32 ||
				s[i - 1] == 9 ||
				s[i -1] == 10 ||
				s[i - 1] == 44 ||
				s[i - 1] == 59 ||
				s[i - 1] == 46 ||
				s[i - 1] == 33 ||
				s[i - 1] == 63 ||
				s[i - 1] == 34 ||
				s[i - 1] == 40 ||
				s[i - 1] == 41 ||
				s[i - 1] == 123 ||
				s[i - 1] == 125 ||
				i == 0)
			s[i] -=32;
		i++;
	}
	return (s);
}
