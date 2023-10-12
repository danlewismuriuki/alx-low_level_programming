#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: is always 0 (success)
 *
 */

int main(void)
{
	char mystring[] = "_putchar";

	int i;

	for (i = 0; mystring[i] != '\0'; i++)
	{
		putchar(mystring[i]);
	}
	putchar('\n');

	return (0);
}
