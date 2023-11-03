#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry point memory for an array
 *
 * @nmemb: memory
 * @size: size of bytes
 *
 * Return: Return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s  = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
		s[n] = 0;
	return (s);
}
