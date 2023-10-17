#include "main.h"

/**
 * rev_string - This is the start of the function
 *
 * Return: void
 *
 * @s: Integer
 *
 */

void rev_string(char *s)
{
	int i;

	int j;

	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
