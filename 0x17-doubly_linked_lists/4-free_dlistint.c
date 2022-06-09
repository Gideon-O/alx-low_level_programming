#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free dlistint
 * @head: pointer to dlistint header
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	struct dlistint_t temp;
	
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
