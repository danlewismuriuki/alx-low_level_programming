#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - This is the ntry point for the function
 * @head: This is the pointer
 * @n: This is the integer
 * Return: This Returns
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;

	return (new_node);
}
