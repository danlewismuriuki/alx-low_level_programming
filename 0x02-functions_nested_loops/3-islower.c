#include "main.h"

/**
 * _islower - Checks for lower case
 * @c: The chaarcter to be checked
 * Return: 1 for lower character or 0 for anything
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	{
		return (0);
	}
}
