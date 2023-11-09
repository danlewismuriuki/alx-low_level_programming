#include "function_pointers.h"
/**
 * int_index - This is the nerty dor the func
 * @array: size of the array
 * @size: size of the array
 * @cmp: function that comapres
 * Return: Returns
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
