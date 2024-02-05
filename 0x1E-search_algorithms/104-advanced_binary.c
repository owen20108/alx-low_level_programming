#include "search_algos.h"

/**
 * binary_search_recursion - Helper function for `advanced_binary`.
 * Recursively searches for a value in an integer array.
 *
 * @array: Pointer to the first element of the array to search.
 * @value: Value to search for.
 * @low: Starting index in array.
 * @high: Ending index in array.
 *
 * Return: Index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
    size_t mid, i;

    /* Check if the array is NULL */
    if (!array)
        return (-1);

    /* Calculate the middle index of the current search range */
    mid = (low + high) / 2;

    /* Display the current search range */
    printf("Searching in array: ");
    for (i = low; i <= high; i++)
        printf("%i%s", array[i], i == high ? "\n" : ", ");

    /* Check if the value is found at the current low index */
    if (array[low] == value)
        return ((int)low);

    /* Check if the current range is not a single element */
    if (array[low] != array[high])
    {
        /* Adjust search range based on comparison with the target value */
        if (array[mid] < value)
            return (binary_search_recursion(array, value, mid + 1, high));
        if (array[mid] >= value)
            return (binary_search_recursion(array, value, low, mid));
    }

    /* Value not found in the array */
    return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns the first appearance of `value` in the array.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;

    /* Check if the array is NULL */
    if (!array)
        return (-1);

    /* Call the recursive binary search helper function */
    return (binary_search_recursion(array, value, low, high));
}

