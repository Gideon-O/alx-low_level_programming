#include "lists.h"

/**
 * get_nodeint_at_index - A function that finds a node at given index
 * @head: Pointer to list
 * @index: Node to get
 *
 * Return: Pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
