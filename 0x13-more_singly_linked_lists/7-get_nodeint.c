#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - This is the function that returns the nth node
 * @head: This is the first element in the list
 * @index: This is the nth index
 * Return: Returns NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp_node;

	temp_node = head;

	if (temp_node != NULL)
	{
		for (i = 0; i < index; i++)
		{
			temp_node = temp_node->next;
		}
	}
	if (i == index && temp_node != NULL)
	{
		return (temp_node);
	}
	return (NULL);

}
