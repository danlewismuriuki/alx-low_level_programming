#include "main.h"

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
