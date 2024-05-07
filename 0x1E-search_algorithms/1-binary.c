#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array of integers
 * @array: points to the list of arrays
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = (size_t)low; i <= (size_t)high; i++)
		{
			printf("%d", array[i]);
				if (i < (size_t)high)
				{
					printf(", ");
				}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		} else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
