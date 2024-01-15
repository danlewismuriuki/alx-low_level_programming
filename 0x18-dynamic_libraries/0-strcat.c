#include "main.h"

/**
 * char *_strcat - This is the entry point for the function
 * @src: This is the firt array
 * @dest: This is the second array
 * Return: This return dest value
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlength++;

	for (i = 0; src[i] != '\0'; i++)
		srclength++;

	for (i = 0; i <= srclength; i++)
		dest[destlength + i] = src[i];

	return (dest);

}
