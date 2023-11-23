#include "main.h"
/**
 * flip_bits - flip bits
 * @n: first num
 * @m: second number
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int k, j;

	k = 0;
	res = 1;
	diff = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (res == (diff & res))
			k++;
		res <<= 1;
	}

	return (k);
}
