#include "lists.h"
/**
 * *get_nodeint_at_index - gets node at given position
 * @head: first node/element of listint_t
 * @index: position of element to get
 * Return: 0 success, NULL if  does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	current = head;

	if (head == NULL)
		return (0);
	while (count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
