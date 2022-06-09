#include "lists.h"

/**
 * dlistint_len - function to find number of nodes
 * @h: pointer to first node
 *
 * Return: Always 1
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}
	return (num);
}
