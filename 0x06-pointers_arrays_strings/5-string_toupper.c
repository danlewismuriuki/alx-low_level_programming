#include "main.h"
/**
 * string_toupper - This is the entry point for this function
 *
 * @str: This is the string to be inputed
 *
 * Return: Will return str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}
