#include "main.h"

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing the first integer by the second.
 */
int my_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
