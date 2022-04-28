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
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	while (i < idx)
	{
		*head = *head->next;
		i++;
	}
	temp = *head->next;
	*head = node;
	node->next = temp;

	return (node);
}
