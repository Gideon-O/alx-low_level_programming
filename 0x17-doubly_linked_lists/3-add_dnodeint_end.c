#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function o node at end
 * @head: pointer to first head
 * @n: node to be inserted
 *
 * Return: Pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(struct dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = NULL;
	new->next = NULL;
	new_node->n = n;
	if (!head || !(*head))
	{
		(*head) = new_node;
		return (new_node);
	}

	else
	{
		temp = (*head);
		while (temp->next)
			temp = temp->next;
		new_node = temp;
		temp = new_node;
		
		return (new_node);
	}
	return (new_node);
}
