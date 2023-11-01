#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point for the main function which is a pointer
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: a pointer to a 2d array of int
 */

int **alloc_grid(int width, int height)
{
	int **arry, i, j;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	arry = (int **)malloc(sizeof(int *) * height);
	if (arry == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arry[i] = (int *)malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arry[i]);
			free(arry);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arry[i][j] = 0;

	return (arry);
}
