/* Helper function for interpolation calculation */
size_t interpolate(size_t low, size_t high, int *array, int value) {
    return low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
}

/* Helper function for adjusting the search range */
void adjust_range(size_t *low, size_t *high, size_t pos, int *array, int value) {
    if (array[pos] < value)
        *low = pos + 1;
    else if (value < array[pos])
        *high = pos - 1;
}

/* Helper function for printing debug messages */
void print_debug_message(size_t pos, int *array, size_t low) {
    printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
    /* Additional debug messages or information as needed */
}

int interpolation_search(int *array, size_t size, int value) {
    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    /* Check if the array is NULL */
    if (!array)
        return (-1);

    /* Perform the interpolation search */
    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high])) {
        pos = interpolate(low, high, array, value);
        print_debug_message(pos, array, low);
        adjust_range(&low, &high, pos, array, value);

        if (array[pos] == value)
            return (pos); /* Value found, return the index */
    }

    /* Check if the target value is at the lower bound of the remaining range */
    if (value == array[low]) {
        print_debug_message(low, array, low);
        return (low);
    }

    /* Display message if the estimated position is out of range */
    pos = interpolate(low, high, array, value);
    printf("Value checked array[%lu] is out of range\n", pos);

    /* Value not found in the array */
    return (-1);
}

