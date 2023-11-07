#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry for function struct dog
 *
 * @d: pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("%.6f\n", d->age);
		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
