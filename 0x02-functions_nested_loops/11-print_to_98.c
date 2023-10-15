#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This is the entry point
 *
 * @n: This is the integer to be checked
 *
 * Return: Is always 0 (success)
 *
 */

void print_to_98(int n)
{
	int i;

	for (i = 0; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			printf(", ", i);
		}
	}
	return (0);
}
