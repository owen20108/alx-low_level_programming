#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print  dog struct
 *
 * @d:pointer for dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("owner: %s\n", d->owner);
}
