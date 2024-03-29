#ifndef LISTS_HEADER
#define LISTS_HEADER

#include <stddef.h>

/**
 * struct list_s  -  list struct
 * @str: String to be checked
 * @len: The length of the string
 * @next: Next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
