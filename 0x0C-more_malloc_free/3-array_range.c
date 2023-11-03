#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point for this function
 *
 * @min: first int
 *
 * @max: second int
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
