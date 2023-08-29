#include "lists.h"
/**
 * listint_len - determines no of elements in a linkelist listint_t
 * @h: first element on the list
 * Return: number od elements if success, NUll (fail)
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
