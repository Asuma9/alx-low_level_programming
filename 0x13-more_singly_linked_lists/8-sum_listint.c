#include "lists.h"
/**
 * sum_listint - sum data(n) of listint_t
 * @head: first element of listint_t
 * Return: sum (success), NULL if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	sum = 0;

	current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
