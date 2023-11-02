#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This is the main entry point
 *
 * @b: This is the integer
 *
 * Return: returns 0 (success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptrs;

	ptrs = malloc(b);
	if (ptrs == NULL)
	{
		exit(98);

	}
	return (ptrs);
}
