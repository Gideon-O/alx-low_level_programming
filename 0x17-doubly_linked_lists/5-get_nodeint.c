#include "lists.h"

/**
 * get_dnodeint_at_index - return node at i-nth
 * @head: Pointer to first node
 * @index: Index of node to be returned
 *
 * Return: Node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int n = 0;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		n++;
		if (n == index)
			return (temp);
	}
	return (NULL);
}
