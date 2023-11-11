#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function adds up the number of arguments
 * @n: Number of argument
 * Return: Returns sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int n = va_arg(ap, int);

		sum = sum + n;
	}
	va_end(ap);
	return (sum);
}
