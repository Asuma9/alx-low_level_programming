#include "lists.h"

/**
  *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  *@head: first element of the list
  *@n: data element to be added
  *Return: added node if success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail_node, *temp;

	tail_node = malloc(sizeof(dlistint_t));
	if (tail_node == NULL)
	{
		return (NULL);
	}
	tail_node->n = n;
	tail_node->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = tail_node;
	}
	else
	{
		*head = tail_node;
	}
	tail_node->prev = temp;

	return (tail_node);
}
