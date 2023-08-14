#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer for dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lngth;
	char *pntr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (lngth = 1, pntr = name; *pntr; lngth++)
		pntr++;
	d->name = malloc(lngth);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (lngth = 1, pntr = owner; *pntr; lngth++)
		pntr++;
	d->owner = malloc(lngth);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (lngth = 0; *name != 0; lngth++, name++)
		d->name[lngth] = *name;
	d->name[lngth] = 0;
	for (lngth = 0; *owner != 0; lngth++)
		d->owner[lngth] = *owner++;
	d->owner[lngth] = 0;
	d->age = age;

	return (d);
}
