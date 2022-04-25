#ifndef _LISTS_H_
#define _LISTS_H_

size_t print_lists(const list_t *h);
size_t list_len(const list *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
