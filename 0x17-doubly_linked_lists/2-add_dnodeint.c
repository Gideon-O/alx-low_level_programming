#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - insert node at head
 * @head: pointer to initial head node pointer
 * @n: value of new node
 *
 * Return: Always dlistint or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n):
{
	struct dlistint_t *new_node;
	new_node = (struct dlisint_t)malloc(sizeof dlistint_t);
	if new_node == NULL
	{
		return NULL;
	}

	new_node->prev = NULL;
	new_node->next = (*head);
	new_node->n = n;
	(*head) = new_node

	return (*head);
}
