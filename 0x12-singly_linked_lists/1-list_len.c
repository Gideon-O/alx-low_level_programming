#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A function that returns the number of elements in a list
 * @h: List value
 *
 * Return: Integer
 */

size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
