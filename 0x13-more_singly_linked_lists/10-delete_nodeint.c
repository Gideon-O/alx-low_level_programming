#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at index
 * @head: Pointer to list
 * @index: Element to delete
 *
 * Return: INteger that has been deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = *head->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
