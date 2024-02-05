#include "search_algos.h"
#include <math.h>

/* Remember that compiling with math.h using gcc requires `-lm`. */

/**
 * min - Returns the minimum of two size_t values.
 *
 * @a: First value.
 * @b: Second value.
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise.
 */
size_t min(size_t a, size_t b)
{
    return (a <= b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * a jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t low, high, jump;

    /* Check if the array is NULL or empty */
    if (!array || size == 0)
        return (-1);

    /* Set the jump size for the jump search */
    jump = sqrt(size);

    /* Perform the jump search */
    for (high = 0; high < size && array[high] < value;
         low = high, high += jump)
    {
        printf("Value checked array[%lu] = [%d]\n",
               high, array[high]);
    }

    /* Display the range where the value is found to be located */
    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    /* Perform a linear search within the identified range */
    for (; low <= min(high, size - 1); low++)
    {
        printf("Value checked array[%lu] = [%d]\n", low, array[low]);

        /* Check if the current element is equal to the target value */
        if (array[low] == value)
            return (low); /* Value found, return the index */
    }

    /* Value not found in the array */
    return (-1);
}

