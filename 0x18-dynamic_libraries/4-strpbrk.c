#include "main.h"

/**
 * *_strpbrk -This is the ntry point
 *
 * @s: String to be searched through
 *
 * @accept: String to be used to check string
 *
 * Return: Will return 0;
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
