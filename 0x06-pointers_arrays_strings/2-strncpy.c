#include "main.h"

/**
 * *_strncpy - function we will use to copy strings
 * @dest: This is the destination
 * @src: This is the source
 * @n: number of bytes
 * Return: it will return dest 
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
