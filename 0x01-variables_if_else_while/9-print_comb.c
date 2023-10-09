#include <stdio.h>

/**
 * main - This is the entry for the function
 *
 * Return: I s always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
