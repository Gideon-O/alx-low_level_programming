#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a node an given index
 * @head: Pointer to list
 * @idx: Index
 * @n: Number to be added to node
 *
 * Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (*head);
	}

	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
