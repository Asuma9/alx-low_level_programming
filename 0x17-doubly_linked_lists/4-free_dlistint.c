#include "lists.h"

/**
  *free_dlistint - frees a dlistint_t list
  *@head: first element of double linked list
  *Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_ptr;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev; /*Traversing to start of the list*/
		}
	}

	while ((head_ptr = head) != NULL)
	{
		head = head->next;
		free(head_ptr);
	}
}
