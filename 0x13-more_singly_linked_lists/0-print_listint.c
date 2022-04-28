#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - A function that prints integers in a list
 * @h: List pointer
 *
 * Return: Pointer to the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
