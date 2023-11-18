#include "lists.h"

/**
  *sum_dlistint - sum of all the data (n) of a dlistint_t linked list
  *@head: first element of a double linked list
  *Return: sum of all elements in the list on success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_list = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			sum_list += head->n;
			head = head->next; 
		}
	}
	return (sum_list);
}
