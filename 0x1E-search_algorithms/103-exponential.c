#include "search_algos.h"

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
 * binary_search_helper - Searches for a value in an integer array using a
 * binary search algorithm. This helper function is not guaranteed to return
 * the lowest index if `value` appears twice in `array`.
 *
 * @array: Pointer to the first element of the array to search.
 * @value: Value to search for.
 * @low: Starting index.
 * @high: Ending index.
 *
 * Return: Index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
    size_t mid, i;

    /* Check if the array is NULL */
    if (!array)
        return (-1);

    /* Perform the binary search */
    while (low <= high)
    {
        mid = (low + high) / 2;

        /* Display the current search range */
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
            printf("%i%s", array[i], i == high ? "\n" : ", ");

        /* Adjust search range based on comparison with the target value */
        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return ((int)mid); /* Value found, return the index */
    }

    /* Value not found in the array */
    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using an exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t low, high, bound = 1;

    /* Check if the array is NULL or empty */
    if (!array || size == 0)
        return (-1);

    /* Find the range in which the value may be present using exponential growth */
    while (bound < size && array[bound] < value)
    {
        /* Display the current checked position and value */
        printf("Value checked array[%lu] = [%d]\n",
               bound, array[bound]);

        /* Increase the bound using exponential growth */
        bound *= 2;
    }

    /* Determine the actual range for binary search */
    low = bound / 2;
    high = min(bound, size - 1);

    /* Display the range where the value is found to be located */
    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    /* Perform binary search within the identified range */
    return binary_search_helper(array, value, low, high);
}

