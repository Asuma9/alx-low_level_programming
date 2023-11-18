#include "lists.h"

/**
  *add_dnodeint - adds a new node at the beginning of a dlistint_t list
  *@head: first element of the list
  *@n: data entry in the list
  *Return: if success, a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	new_node->next = temp;
	if (temp != NULL)
	{
		temp->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
