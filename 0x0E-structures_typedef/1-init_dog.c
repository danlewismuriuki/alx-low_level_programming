#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point for the function
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * @d: dog pointer
 *
 *Return: Return 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
