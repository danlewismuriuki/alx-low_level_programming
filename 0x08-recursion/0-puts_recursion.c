#include "main.h"

/**
 * _puts_recursion - this is the main entry
 * @s: This is the string
 * Return: Returns void
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
