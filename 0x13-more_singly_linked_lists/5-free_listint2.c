#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - A function that frees a list data structure
 * @head: Pointer to list elemet
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
