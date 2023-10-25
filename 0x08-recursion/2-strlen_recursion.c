#include "main.h"

/**
 * _strlen_recursion - This is the ntry point
 *
 * @s: This is the input
 *
 * Return: This is the return
 */

int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);
	}
	return (j);
}
