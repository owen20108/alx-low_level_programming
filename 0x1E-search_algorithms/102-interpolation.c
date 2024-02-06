#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using an interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	/* Check if the array is NULL */
	if (!array)
		return (-1);

	/* Perform the interpolation search */
	while ((array[high] != array[low]) &&
	       (value >= array[low]) && (value <= array[high]))
	{
		/* Calculate the estimated position using interpolation formula */
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		/* Display the current checked position and value */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* Adjust search range based on comparison with the target value */
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos); /* Value found, return the index */
	}

	/* Check if the target value is at the lower bound of the remaining range */
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	/* Display message if the estimated position is out of range */
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);

	/* Value not found in the array */
	return (-1);
}

