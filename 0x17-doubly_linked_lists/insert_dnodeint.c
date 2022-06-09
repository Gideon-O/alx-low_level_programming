#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to first node
 * @idx: index of list
 * @n: integer to be inserted
 *
 * Return: Address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int x = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	temp = (*h);
	while (temp)
	{
		temp = temp->next;
		x++;
		if (x == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
