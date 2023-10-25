#include "main.h"

/**
 * _pow_recursion- This is the entry point
 *
 * @x: First Integer
 *
 * @y: Second integer
 *
 * Return: Returns 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
