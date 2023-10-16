#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: first value which is an integer
 *
 * @b: second integer which is an inter
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
