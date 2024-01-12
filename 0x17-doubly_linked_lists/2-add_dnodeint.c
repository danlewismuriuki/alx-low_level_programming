#include "lists.h"

/**
 * add_dnodeint - pointer to list
 * @head: this is a pointer to the current head
 * @n: num values stored in n
 * Return: returns the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*Assign data to new_node*/
	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;

	/*Assign head pointet to the new_node*/
	if (*head != NULL)
	/* Assign the prev address of old head to new_head*/
	(*head)->prev = new_node;
	/*change the head to be the ne_node which is now the new node*/
	*head = new_node;
	return (new_node);
}
