#include "lists.h"
/**
 * *add_nodeint - adds new node at the head
 * @head: pointer to a pointer
 * @n: integer value
 * Return: address of the new node (Success), NULL (fail)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	 new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
