#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - This function free and sets null to the head pointer
 * @head: Will be set to null
 * Return: Returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_head_node;
	listint_t *temp_node;

	new_head_node = *head;

	while (new_head_node != NULL)
	{
		temp_node = new_head_node;
		new_head_node = new_head_node->next;
		free(temp_node);
	}
	*head = NULL;
}
