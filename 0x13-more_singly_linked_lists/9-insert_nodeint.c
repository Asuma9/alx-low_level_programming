#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts new node at a given position
 * @head: first node of listint
 * @idx: index position to insert newnode
 * Return: Address of newnode (success), NULL (fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int count;

	count = 0;

	temp = *head;

	if (idx != 0)
	{
		for (; count < idx - 1 && temp != NULL; count++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t)); /* assign mem block */
	
	if (newnode == NULL)
		return (NULL);

	newnode->n = n; /* assign value to newnode */
	
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
