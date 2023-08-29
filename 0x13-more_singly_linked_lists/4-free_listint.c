#include "lists.h"
/**
 * free_listint - fucntion that frees a listint_it
 * @head: pointer header
 * Return: freed memory
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;

	}
}
