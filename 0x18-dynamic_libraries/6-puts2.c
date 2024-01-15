#include "main.h"

/**
 * puts2 - This is the start of the function
 *
 * @str: String we sre going to print
 *
 * Return: is void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	 _putchar('\n');
}
