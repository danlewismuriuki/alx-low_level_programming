#include "main.h"
/**
 * reverse_array -  This is the entry point for the function
 *
 * @n: number of elements of ana array
 *
 * @a: pointer to an array
 *
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
