#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds node at end of a list
 * @head: Pointer to the location of new string
 * @str: String to be added to the end of a list
 *
 * Return: Pointer to the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
