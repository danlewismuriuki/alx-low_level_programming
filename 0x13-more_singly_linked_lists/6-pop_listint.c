#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - The function deletes the first node
 * and returns the data that was stored in the node
 * @head: This is the node we will be deleting
 * Return: This will return the data of the node we will delete
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;

	int n_data = 0;

	if (*head == NULL)
	{
		return (0);
	}

	n_data = (*head)->n;

	temp_node = *head;

	*head = (*head)->next;
	free(temp_node);

	return (n_data);
}
