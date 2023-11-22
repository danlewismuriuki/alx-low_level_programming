#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function tha reverses a list.
 * @head: will be the end of the list
 * Return: will be the strat of the node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	while ((*head)->next != NULL)
	{
		start = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = start;
	}

	(*head)->next = end;

	return (*head);
}
