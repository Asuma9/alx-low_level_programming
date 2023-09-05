#include "main.h"
/**
 **_strlen - fucntion prints length of string
 **@s: input string to write
 **Return: length of string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
**create_file - function that creates a file
**@filename: name of file to be created
**@text_content: null terminated string written to file
**Return: 1 (success), -1 (fail)
*/
int create_file(const char *filename, char *text_content)
{
int filedes;
ssize_t wr_bytes;
unsigned int length;

if (filename == NULL)
return (-1);

/* open filedes 4 writing/ create if doesnt exist/ truncate if does */
filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0666);
if (filedes == -1)
return (-1);

/* create an empty file if text in NULL */
if (text_content == NULL)
{
length = 0;
text_content = "";
}
else
length = _strlen(text_content);

wr_bytes = write(filedes, text_content, length);
if (wr_bytes == -1)
return (-1);

close(filedes);
return (1);
}
