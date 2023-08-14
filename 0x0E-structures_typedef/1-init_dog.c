#include "dog.h"

/**
 * init_dog - initializes a dog struct with variable
 * @d: pointer for the struction
 * @name: pointer for dog name
 * @age: dog age
 * @owner: pointer for owner age
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
