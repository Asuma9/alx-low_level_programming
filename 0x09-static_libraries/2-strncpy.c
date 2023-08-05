/**
 * *_strncpy - function that copies a string
 * @dest: pointed destination
 * @src: Pointed source
 * @n: parameter to be tested
 * Return: 0 always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
