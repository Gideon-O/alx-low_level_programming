#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_t - Structure for list node
 * @list_words: String
 * @word_len: Lenght of the string
 * @ptr: Pointer to the node
 */

struct list_t
{
	char *list_words;
	int word_len;
	struct list_t *ptr
};

size_t print_lists(const list_t *h);
size_t list_len(const list *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
