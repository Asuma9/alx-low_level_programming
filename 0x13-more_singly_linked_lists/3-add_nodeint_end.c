#include "lists.h"
/**
 * *add_nodeint_end - appends node at end of listint_t
 * @head: pointer to pointer head
 * @n: value in the node
 * Return: address of new element, NULL (fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *temp;

	(void)temp;

	node_end = malloc(sizeof(listint_t));

	if (node_end == NULL)
	{
		return (NULL);
	}
	node_end->n = n;
	node_end->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = node_end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_end;
	}
	return (*head);
}
