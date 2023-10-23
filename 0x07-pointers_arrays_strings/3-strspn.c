#include "main.h"
/**
 * _strspn - Entry of the function
 *
 * @s: string to be checked through
 *
 * @accept: The string we are checking
 *
 * Return: will return length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			return (i);

		}
	}
	return (0);
}
