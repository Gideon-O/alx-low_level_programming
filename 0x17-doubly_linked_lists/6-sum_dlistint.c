#include "lists.h"

/**
 * sum_dnodeint - Function to get the sum of nodes
 * @head: Pointer to first node
 *
 * Return: Integer value
 */

int sum_dnodeint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
