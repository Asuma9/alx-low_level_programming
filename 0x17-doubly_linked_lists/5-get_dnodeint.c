#include "lists.h"

/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  *@head: first element of the list
  *@index: nth element to be returned
  *Return: indexed element on success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}

	count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);

}
