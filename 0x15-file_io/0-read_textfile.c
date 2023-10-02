#include "main.h"

/**
 **read_textfile - reads text file & print to POSIX
 **@filename: name of file to read text from
 **@letters: no of letters to read & print
 **Return: actual no of letters, 0 (NULL, fail,
 **	failure to open file)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes = open(filename, O_RDONLY);
	char *buffer;
	ssize_t rd_bytes, wr_bytes;

	if (filename == NULL)
		return (0);
	if (filedes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1); /*+1 for the '\0' */
	if (buffer == NULL)
	{
		close(filedes); /*close fd b4 returning */
		return (0);
	}
	/* Read specified no of letters 4rm the file */
	rd_bytes = read(filedes, buffer, letters);
	if (rd_bytes == -1)
	{
		free(buffer); /* free buffer b4 returning */
		close(filedes); /* close fd b4 return */
		return (0);
	}

	buffer[letters] = '\0';/*null-terminate string */
	wr_bytes = write(STDOUT_FILENO, buffer, rd_bytes); /* output */
	if (wr_bytes == -1)
	{
		free(buffer);
		close(filedes);
		return (0);
	}
	free(buffer); /* free buffer */
	close(filedes); /* close open file */

	return (rd_bytes);
}
