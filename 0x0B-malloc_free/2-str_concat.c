#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main netry point for the function
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, e, lmt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (e = 0; e < i; e++)
		ptr[e] = s1[e];
	lmt = j;
	for (j = 0; j <= lmt; e++, j++)
		ptr[e] = s2[j];
	return (ptr);
}
