#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a new add_node
 * @head: This the start of the list_t
 * @str: This is the sring to be checked
 * Return: This returns a pointer to the node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (str == NULL)
		return (NULL);

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
