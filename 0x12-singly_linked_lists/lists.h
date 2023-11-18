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
int main(void);

#endif
