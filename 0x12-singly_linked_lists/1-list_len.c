#include "lists.h"
/**
 * list_len - prints list length
 * @h: linked string node pointer
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
