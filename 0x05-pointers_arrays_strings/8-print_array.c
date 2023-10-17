#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point of the functions to n elements
 *
 * @a: array
 *
 * @n: array
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
