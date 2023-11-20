#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This is the entry for this function
 * @h: This is the head pointer
 * Return: This returns the length of the int
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
