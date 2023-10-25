#include "main.h"

/**
 * _print_rev_recursion - This is the entry point
 *
 * @s: This is the input
 *
 * Return: Returns void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
