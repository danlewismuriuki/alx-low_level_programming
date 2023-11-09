#include "function_pointers.h"
/**
 * array_iterator - Entry point for the function
 * @array: This is the first integer
 * @size: This is the int size
 * @action: This is an entry point for the function pointer
 * Return: Returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;

		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
