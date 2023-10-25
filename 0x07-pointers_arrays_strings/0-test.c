#include "main.h"

/**
 * *_memset - This is the main entry point
 *
 * @b: character to be printed in the memory
 *
 * @n: number of bytes
 *
 * @s: This is the pointer
 *
 * Return:Returns pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
