#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t
 * @head: first node/element of listint_int
 * Return: head node's data (success), null (fail)
 */
int pop_listint(listint_t **head)
{
	int node_h;
	listint_t *temp;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0); /*check if list is empty */

	temp = *head;

	node_h = temp->n; /* save data of the 1st node */

	current = temp->next;

	free(temp);

	*head = current;

	return (node_h);
}
