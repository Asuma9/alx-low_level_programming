#include "lists.h"

/**
  *insert_dnodeint_at_index - inserts a node at given index
  *@h: first element of the list
  *@idx: position at which to insert node
  *@n: data to be inserted with the node
  *Return: address of new node on success. NULL on fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int count;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		count = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (count == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = temp->next;
						temp->next->prev = new_node;
						new_node->prev = temp;
						temp->next = new_node;
					}
				}
				break;
			}
			temp = temp->next;
			count++;
		}
	}

	return (new_node);
}
