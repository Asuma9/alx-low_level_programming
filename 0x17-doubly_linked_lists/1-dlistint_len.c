#include "lists.h"

/**
  *dlistint_len - returns number of elements in a linked list
  *@h: first element of the list
  *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
	{
		return (count_nodes);
	}
	while (h->prev != NULL)
	{
		h = h->prev; /*traverse to beginning of the list*/
	}
	while (h != NULL)
	{
		count_nodes++;/*keep track of no of nodes*/
		h = h->next; /*move next*/
	}
	return (count_nodes);
}

