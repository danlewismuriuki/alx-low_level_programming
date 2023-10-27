#include "main.h"
/**
 * _strlen - This is the entry of the function
 *
 * Return: is always 0 (success)
 *
 * @s: We are checking for the pointer
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;

	return (count);
}
