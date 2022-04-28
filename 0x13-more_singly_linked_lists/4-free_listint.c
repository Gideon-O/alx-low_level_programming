#include "lists.h"
#include <stdio.h>

/**
 * free_listint - A function that frees the list stucture
 * @head: Pointer to element
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
