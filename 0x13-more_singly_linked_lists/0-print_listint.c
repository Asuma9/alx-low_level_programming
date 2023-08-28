#include "lists.h"
/**
 * print_listint - prints elements of listint_t
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;
	const listint_t *current;

	counter = 0;
	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n); /* print elements of current node */
		current = current->next; /* point to next link */
		counter++;
	}
	return (counter);
}
