#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
 * add_node_end - function adds a new add_node
 * @head: This the start of the list_t
 * @str: This is the sring to be checked
 * Return: This returns a pointer to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	while (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	while (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}
	while (ptr != NULL && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new_node->next = NULL;
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		ptr->next = new_node;
	}
	return (new_node);
}
