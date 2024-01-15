#include "main.h"

/**
 * *_strstr - This is the entry point
 *
 * @haystack: This is the string
 *
 * @needle: This is the set being searched
 *
 * Return: It returns 0;
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);

}
