#include "main.h"

/**
 * print_last_digit - Compile the absolute value of an integer
 * @n: The number to be computed
 * Return: Absolute value of number or zero
 *
 */

int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;

	if (lastnum < 0)

	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');

	return (lastnum);
}
