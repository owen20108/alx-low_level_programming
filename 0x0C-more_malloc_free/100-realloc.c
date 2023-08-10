#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  reallocate memory block uses malloc and free
 * @ptr: pointr to begin of memory allocate
 * @old_size: the old size of the allocate
 * @new_size: the new size of the allocate
 *
 * Return: the ptr or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pontr = ptr;
	char *new_pontr;
	void *retunt;
	unsigned int cntr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_pontr = malloc(new_size);
		for (cntr = 0; cntr < old_size; cntr++)
		{
			*(new_pontr + cntr) = *(pontr + cntr);
		}
		retunt = new_pontr;
		free(ptr);
		return (retunt);
	}
	return (ptr);
}
