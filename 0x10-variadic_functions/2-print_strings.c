#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This the entry for the function which prints strings
 * @separator: This is the comma that goes in between the numbers
 * @n: This is the number of parameters
 * Return: Returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
