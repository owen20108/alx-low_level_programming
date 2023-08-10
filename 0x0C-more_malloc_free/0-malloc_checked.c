#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory use malloc
 * @b: number of byte for allocate
 *
 * Return: a pointer for allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *pontr;

	pontr = malloc(b);

	if (pontr == NULL)
		exit(98);

	return (pontr);
}
