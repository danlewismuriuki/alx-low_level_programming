#include "main.h"

/**
 * set_bit - function sets the value of  bit at an index
 * @n: pointer
 * @index: index
 * Return: 1 (success) -1 (error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
