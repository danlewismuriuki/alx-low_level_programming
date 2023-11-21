#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - This is the entry of the function
 * @head: Thie first pointer in the list
 * Return: Returns void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}

}
