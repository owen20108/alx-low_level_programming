#include "function_pointers.h"
/**
 * array_iterator - iteratation array from function
 * @array:  array of integers
 * @size:  size of the array
 * @action:  function pointer
 *
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int itrtor;

	if (action != NULL)
	{
		if (array != NULL)
		{
		for (itrtor = 0; itrtor < size; itrtor++)
			(*action)(array[itrtor]);
		}
	}
}
