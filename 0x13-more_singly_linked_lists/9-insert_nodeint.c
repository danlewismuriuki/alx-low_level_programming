#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Entry for the function
 * @head: Start for the list
 * @idx: Where the index should be added
 * @n: index of the new node
 * Return: function fails (NULL) or address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node = *head;
	unsigned int j;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = new_node;
		*head = ptr;
		return (ptr);
	}
	for (j = 0; j < (idx - 1); j++)
	{
		if (new_node == NULL || new_node->next == NULL)
			return (NULL);

		new_node = new_node->next;
	}
	ptr->next = new_node->next;
	new_node->next = ptr;
	return (ptr);
}
