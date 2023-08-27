#include "lists.h"

/**
 * *add_node - function to add a node as header
 * @head: function pointer
 * @str: char string to be duplicated
 * Return: extended linked list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		return (NULL);
		length = 0;
	}
	else
	{
		dup_str = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = dup_str;
	new->next = *head;
	*head = new;

	return (*head);
}
/**
 * _strlen - prints string length
 * @s: string whose length is to be determined
 * Return: string length success, NULL if fail
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
