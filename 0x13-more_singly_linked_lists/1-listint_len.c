#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of list elements
 * @h: Pointer to the list nodes
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
