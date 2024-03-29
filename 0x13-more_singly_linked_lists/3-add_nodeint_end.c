#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - A function that adds a node at hte end of a list
 * @head: Pointer to the list element
 * @n: INteger element to be added at the end
 *
 * Return: Pointer to the list element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (*head);
}
