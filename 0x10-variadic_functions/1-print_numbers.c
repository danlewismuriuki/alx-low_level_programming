#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function prints numbers that will
 * @separator: This will be inbetween the numbers
 * @n: The arguments
 * Return: Returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int nums;

	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
