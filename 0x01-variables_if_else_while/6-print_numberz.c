#include <stdio.h>

/**
 * main - This is the entry point of the function
 * Return: is always 0 (success)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
