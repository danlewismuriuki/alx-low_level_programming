#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
