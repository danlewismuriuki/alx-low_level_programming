#include "main.h"

/**
 * clear_bit - function setsa bit to 0 at a specified index
 * @n: number
 * @index: starts frm 0
 * Return: 1 (success), or (error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))

		return (-1);

	i = ~(1 << index);

	*n = *n & i;

	return (1);
}
