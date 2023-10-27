#include <stdio.h>

/**
 * main - Entry point for the function
 *
 * @argc: arguments count
 *
 * @argv: argument vector
 *
 * Return: Returns 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
