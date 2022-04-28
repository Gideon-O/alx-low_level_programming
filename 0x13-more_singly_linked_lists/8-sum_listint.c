#include "lists.h"

/**
 * sum_listint - Sums the integers in a list
 * @head: Pointer to the list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
