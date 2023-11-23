#include "main.h"

/**
 * get_endianness - function checks for endianness.
 * Return: big (0) end (1)
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
