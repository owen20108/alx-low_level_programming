#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear Search
 *
 * @array: Pointer to the input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: The index of the value in the array if found, otherwise, -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	/* Check if the array is NULL */
	if (array == NULL)
	{
		return (-1);
	}

	/* Iterate through the array to find the value */
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%i]\n", index, array[index]);

		/* Check if the current element is equal to the target value */
		if (array[index] == value)
		{
			/* Value found, return the index */
			return (index);
		}
	}

	/* Value not found in the array */
	return (-1);
}

