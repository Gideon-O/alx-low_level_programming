#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - A function that adds a node at the beggining of a list
 * @head: Pointer to the frst node
 * @n: Integer value to add at beggining of list
 *
 * Return: Pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		*head = new_node;
		new_node->next = temp;
	}
	return (new_node);
}
