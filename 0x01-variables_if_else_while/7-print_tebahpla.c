#include <stdio.h>

/**
 * main - This is the entry point of the function
 * Return: is always 0 (success)
 *
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
