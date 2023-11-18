#include "lists.h"

/**
  *delete_dnodeint_at_index - deletes node at index of a dl linked list
  *@head: first element of the list
  *@index: index at which to delete a node
  *Return: list with less nodes if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int count;

	temp = *head;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	count = 0;

	/*Traversing the list*/
	while (temp != NULL)
	{
		if (count == index) /*Should the current node be deleted?*/
		{
			if (count == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				current->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = current;
			}
			free(temp);
			return (1);
		}
		/*update pointer and index for next iteration*/
		current = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}
