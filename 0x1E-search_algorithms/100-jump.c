#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of integers
 * array: pointer to the first element of the array
 * size: number of elements in array
 * value: value to search fo
 */

int jump_search(int *array, size_t size, int value)
{
	int m, k, i, j;
	i = 0;
	m = (int)sqrt(size);
	k = m;

	while(array[m] <= value && m < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		i = m;
		m = m + k;
		if (m > (int)size - 1)
		{
			printf("Value checked array[%d] = [%d]\n", i, (int)size - 1);
			break;
		}
	}
	for(j = i; j <= m && j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if(array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
