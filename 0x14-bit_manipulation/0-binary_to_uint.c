#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - This function changes strings of 1 and 0's to integer
 * @b: this is the ointer to the string
 * Return: Will return the string binary as unsigned integer binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int Binary_list = 0;

	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			int bits = b[i] - '0';

			Binary_list = (Binary_list << 1) | bits;
		}
		else
		{
			return (0);
		}
	}
	return (Binary_list);
}
