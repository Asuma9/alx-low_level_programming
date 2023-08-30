#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of listint_t
 * @head: first node of listint_t
 * @index: node position to be deleted
 * Return: 1 (successful), -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	count = 0;
	temp = *head;

	if (index != 0) /* check for valid node */
	{
		for (; count < index && temp != NULL; count++)
			temp = temp->next; /* traverse the whole list */
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		current = temp->next;
		temp->next = current->next;
		free(current);
	}
	return (1);
}
