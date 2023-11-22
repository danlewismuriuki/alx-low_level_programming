#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - funct delets the node at index
 * @head: pointer to list start
 * @index: This is the index of the node to be deleted
 * Return: Returns 1 (success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *tmp;
	listint_t *new_node;

	new_node = *head;

	if (new_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new_node);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (new_node->next == NULL)
			return (-1);
		new_node = new_node->next;
	}
	tmp = new_node->next;
	new_node->next = tmp->next;
	free(tmp);
	return (1);
}
