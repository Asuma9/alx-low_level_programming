#include "lists.h"
/**
 * *add_node_end - adds a node at the end of a string
 * @head: pointer to a pointer to the head
 * @str: string to be passed
 * Return: added node at end (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	 list_t *temp;

	/* storing a copy of the header pointer*/
	temp = *head;

	/* allocating memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL); /* checking if mem allocation was a success */

	if (str == NULL)
		return (NULL); /* check if string is empty */
	{
		dup_str = strdup(str); /* duplicating input string */
	}
	if (dup_str == NULL)
	{
		free(new_node);/* free allocated mem for the new node */
		return (NULL);
	}
	new_node->len = _strlen(dup_str); /* get len of string & set it in new node */

	new_node->str = dup_str; /* set 'str' field of new node to the dup string*/

	new_node->next = NULL; /*setting 'next field of new mode to NULL */

	if (*head == NULL)
	{
		*head = new_node;/* make new node 'head & return it */
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next; /* traversing to the last node in the list */
	temp->next = new_node; /* set 'next' ptr of last node to point to new node*/
	return (new_node);
}
/**
 * _strlen - print length of a string
 * @s: string to be passed
 * Return: length of str (succes)
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
