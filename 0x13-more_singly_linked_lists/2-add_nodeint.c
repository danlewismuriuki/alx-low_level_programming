#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - this is the entry for the function
 * @head: This is the pointer to the list
 * @n: This is the int type
 * Return: This Returns next node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
