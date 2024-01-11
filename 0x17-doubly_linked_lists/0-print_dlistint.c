#include "lists.h"

/**
 * print_dlistint - func prints all the elements of a list.
 * @h: Pointer to the list.
 * Return: The num  of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
