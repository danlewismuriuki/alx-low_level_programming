#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - This is the main entry point
 *
 * @str: This is char value
 *
 * Return: Returns 0 (success);
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	;
	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
