#include "hash_tables.h"

/**
 * hash_table_create - func will create a table
 * @size: Number of slots/ buckets
 * Return: Returns the new_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int j;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		new_table->array[j] = NULL;
	}
	return (new_table);
}
