#include <stdio.h>
/**
 * main - This is the entry point of the function
 *
 * Return: Is always 0 when (succcess)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
