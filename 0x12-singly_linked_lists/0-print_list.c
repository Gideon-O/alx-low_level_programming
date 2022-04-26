#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the elements of a list
 * @h: The list whose elements are to be printed
 *
 * Return: Number of nodes(size_t)
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
