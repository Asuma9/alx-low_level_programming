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

	temp = *head;
	count = 0;
	
	if (index != 0) /* check for valid node */
	{
		for (; count < index - 1 && temp != NULL; count++)
			temp = temp->next; /* traverse the whole list */
	}
	if (temp == NULL ||  (temp->next == NULL && index != 0))
		return (-1);

	current = temp->next;

	if (index != 0)
	{
		temp->next = current->next;
		free(current);
	}
	else
	{
		free(temp);
		*head = current;
	}
	return (1);
}
