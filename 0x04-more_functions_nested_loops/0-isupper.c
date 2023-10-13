#include "main.h"

/**
 * _isupper - This the entry point
 * @c: We are checking this character
 *
 * Return: 0 0r 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
