#include "function_pointers.h"

/**
 * int_index -  function to search integer
 * @array: array to loop
 * @size: array size
 * @cmp: function compare values
 * Return: intger value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itrtor;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (itrtor = 0; itrtor < size; itrtor++)
	{
		if (cmp(array[itrtor]))
			return (itrtor);
	}
	return (-1);
}
