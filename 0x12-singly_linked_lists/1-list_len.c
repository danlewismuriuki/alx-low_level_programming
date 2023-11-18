#include <stdio.h>
#include "lists.h"

/**
 * list_len - This is the length
 * @h: This is the header pointer
 * Return: This returns length
 */

size_t list_len(const list_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
