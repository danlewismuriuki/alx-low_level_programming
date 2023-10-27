#include "main.h"

/**
 * _isdigit - This the entry point
 * @c: We are checking this character
 *
 * Return: 0 0r 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
