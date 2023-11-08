#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a new dog
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: new dog to pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ml, pl, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ml = 0; name[ml]; ml++)
		;
	ml++;
	dog->name = malloc(ml * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ml; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (pl = 0; owner[pl]; pl++)
		;
	pl++;
	dog->owner = malloc(pl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < pl; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
