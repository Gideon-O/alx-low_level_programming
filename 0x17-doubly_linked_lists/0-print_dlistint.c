#include "lists.h"
#include <printf.h>

/**
 * print_dlistint - print list values
 * @h: Pointer to list header
 *
 * Return: Always 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
