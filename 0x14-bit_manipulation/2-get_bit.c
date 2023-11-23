#include "main.h"

/**
 * get_bit - function returns a bit at a given index.
 * @n: integer
 * @index: position
 * Return: Returns value of index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
