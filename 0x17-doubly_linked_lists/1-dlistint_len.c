#include "lists.h"

/**
 * dlistint_len - func prints num of elements
 * @h: head pointer
 * Return: Returns num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
