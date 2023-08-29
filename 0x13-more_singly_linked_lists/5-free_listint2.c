#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 * @head: pointer to a pointer head
 * Return: head pointer to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node; /*create temp node */
	listint_t *current;

	if (head != NULL)
	{
		current = *head; /* save current node */

		while ((temp_node = current) != NULL)
		{
			current = current->next;/* move current to next */
			free(temp_node); /* free saved node */
		}
		*head = NULL;
	}
}
