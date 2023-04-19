#include "function_pointers.h"
/**
 * array_iterator - iteratates an array through a function
 * @array: the array of integers
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		if (array != NULL)
		{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
		}
	}
}
