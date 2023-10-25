#include "main.h"

/**
 * factorial - This is the entry point
 * @n: integer to be returned
 * Return: return 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
