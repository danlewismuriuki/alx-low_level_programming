#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: I s always 0 (success)
 *
 */

int main(void)
{
	char myString[] = "_putchar";
	int i;

	for (i = 0; myString[i] != '\0'; i++)
	{
		putchar(myString[i]);
	}
	putchar('\n');
	return (0);
}
