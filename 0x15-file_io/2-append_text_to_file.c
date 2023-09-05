#include "main.h"
/**
 **_strlen - prints string to std output
 **@s: string to print
 **Return: 0 (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 **append_text_to_file - appends text at end of a file
 **@filename: pointer to a file
 **@text_content: contents of the file
 **Return: 1 (success), -1 (fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	ssize_t wr_bytes;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0666);
	if (filedes == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(filedes);
		return (-1);
	}

	wr_bytes = write(filedes, text_content, _strlen(text_content));
	if (wr_bytes == -1)
	{
		close(filedes);
		return (-1);
	}

	close(filedes);
	return (1);
}
