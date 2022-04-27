#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that deletes the contents of a list
 * @head: Pointer to the first element of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp->str);
		free(temp->len);
		free(temp);
	}
	free(head);
}
