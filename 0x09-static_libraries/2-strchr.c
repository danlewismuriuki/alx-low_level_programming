#include "main.h"

/**
 * *_strchr - This is the main entry poin for the function
 *
 * @s: String value to be returned
 *
 * @c: first character occcurence
 *
 * Return: returns the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
