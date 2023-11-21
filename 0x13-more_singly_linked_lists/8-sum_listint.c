#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - This is the function that adds the nodes
 * @head: This a pointer to the list
 * Return: Returns the sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp_node;

	temp_node = head;
	if (temp_node == NULL)
	{
		return  (0);
	}

	while (temp_node != NULL)
	{
		sum = sum + temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
