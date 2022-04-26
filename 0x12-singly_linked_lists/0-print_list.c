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
	unsigned int num;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	for (num = 0; h->next != NULL; num++)
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	return (num);
}
