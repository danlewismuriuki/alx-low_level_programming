#include "main.h"
#include <stdio.h>
/**
 * char *_strncat - This is the function entry point
 *
 * @src: string
 *
 * @dest: string
 *
 * @n: number of bytes
 *
 * Return: will return val
 */

char *_strncat(char *dest, char *src, int n)
{

	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';

	return (dest);
}
