#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - This is the Entry point for the function
 *
 * @s1: This is the first integer
 *
 * @s2: This is the second integer
 *
 * @n:This is the number of bytes
 *
 * Return: This returns 0 (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l, m;
	char *str;

	if (s1 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s1[k]; ++k)
			;
	}
	if (s2 == NULL)
	{
		l = 0;
	}
	else
	{
		for (l = 0; s2[l]; ++l)
			;
	}
	if (l > n)
		l = n;
	str = malloc(sizeof(char) * (k + l + 1));
	if (str == NULL)
		return (NULL);
	for (m = 0; m < k; m++)
		str[m] = s1[m];
	for (m = 0; m < l; m++)
		str[m + k] = s2[m];
	str[k + l] = '\0';
	return (str);
}
