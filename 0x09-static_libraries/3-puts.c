#include "main.h"
/**
 * _puts - This is the entry of the function
 *
 * Return: is void
 *
 * @str: We are checking for the pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
