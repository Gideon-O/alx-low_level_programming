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

	temp = head;
	while (temp->next)
	{
		free(temp->prev);
		free(temp->n);
		free(temp->next);
		free(temp);
	}
	free(temp);
}
