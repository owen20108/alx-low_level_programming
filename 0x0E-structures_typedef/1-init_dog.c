#include "dog.h"
/**
 * init_dog - initialize  dog struct with information
 * @d: pointer of  the struct
 * @name: pointer  name of dog
 * @age: age  dog
 * @owner: pointer  age owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

