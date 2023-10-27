#include "main.h"

/**
 * *_memcpy - Entry point for the function
 *
 * @dest: destination pointer
 *
 * @src: source pointer
 *
 * @n: number of bytes
 *
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
