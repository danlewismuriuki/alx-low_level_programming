#include <stdio.h>

/**
 * main - This is the entry point of the function
 * Return: is always 0 (success)
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (!(i == 'q' || i == 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
