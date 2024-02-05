#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted integer array using the
 * binary search algorithm. The function is not guaranteed to return the
 * lowest index if `value` appears multiple times in `array`.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
    int low, mid, high;
    int x;

    /* Check if the array is NULL */
    if (array == NULL)
    {
        return (-1);
    }

    /* Initialize low and high for binary search */
    low = 0;
    high = size - 1;

    /* Binary search algorithm */
    while (low <= high)
    {
        mid = (low + high) / 2;

        /* Display the current search range */
        printf("Searching in array: ");
        for (x = low; x <= high; x++)
            printf("%i%s", array[x], x == high ? "\n" : ", ");

        /* Adjust search range based on comparison with the target value */
        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return (mid); /* Value found, return the index */
    }

    /* Value not found in the array */
    return (-1);
}

