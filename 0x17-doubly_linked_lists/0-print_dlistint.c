#include "lists.h"


/**
  *print_dlistint - prints all the lements of a doubly linked list
  *@h: first element of the list
  *Return: nothing
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
		return (count_nodes);
	while (h->prev != NULL)
		h = h->prev; /*traverse to beginning of list*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);

}
