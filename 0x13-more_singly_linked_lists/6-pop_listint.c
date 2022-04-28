#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Delete the first element int list
 * @head: Pointer to the list
 *
 * Return: Integer value
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp, *current;

	if (*head == NULL)
		return (0);

	temp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(temp);
	}
	else
		i = 0;

	return (i);
}
