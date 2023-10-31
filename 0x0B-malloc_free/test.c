#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - This is the main Entry point
 *
 * @str: Pointer
 *
 * Return: This returns 0
 */

char *_strdup(char *str)
{
	char *ptStr;
	/* get length of str */
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	/* determine size and allocate enough memory space for it */
	ptStr = malloc((str_len * sizeof(char)) + 1);
	/* check if malloc doesn't return null */
	if (ptStr == NULL)
	{
		return (NULL);
	}
	/* copy the str to the new location */
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		ptStr[count] = str[count];
	}
	ptStr[count] = '\0';
	return (ptStr);
}
