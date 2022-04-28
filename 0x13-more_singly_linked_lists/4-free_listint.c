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
	listint_t *temp;

	temp = head;
	while (temp->next)
	{
		free(head);
		free(temp);
	}
	free(temp);
}
