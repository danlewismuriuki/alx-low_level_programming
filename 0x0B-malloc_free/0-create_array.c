#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 *
 * @c: This is the array
 *
 * @size: This is the size of type integer
 *
 * Return: Returns a char value
 */


char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size  * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);

}
