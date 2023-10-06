#include <stdio.h>
/**
 * main - This is the entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of a int: %zu\n byte(s)", sizeof(int));
	printf("Size of a long int: %zu\n byte(s)", sizeof(long));
	printf("Size of a long long int: %zu\n byte(s)", sizeof(long long int));
	printf("Size of a float: %zu\n byte(s)", sizeof(float));
	return (0);
}
