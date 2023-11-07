#ifndef dog_FILE
#define dog_FILE

/**
 * struct dog - Entry for the struct
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
