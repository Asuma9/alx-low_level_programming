#include "lists.h"
/**
 * free_list - frees list_t list address
 * @head: pointer to the head node or first elements
 * Return: void (success) Null (fail)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
