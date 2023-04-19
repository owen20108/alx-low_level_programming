#include "function_pointers.h"
/**
 * int_index - runs multiples comparison passes over an array
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function pointer
 *
 * Return: the index of the array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = (*cmp)(array[i]);
		if (i == (size - 1) && res != 1)
			return (-1);
		if (res == 1)
			break;
	}
	return (i);
}
