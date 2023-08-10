#include <stdlib.h>
#include "main.h"

/**
  * array_range - create  integer array
  * @min: min value to be stored
  * @max: max value to be stored and
  *
  * Return: pointer for array otherwise null
  */

int *array_range(int min, int max)
{
	int *arry, lnght, cuntr;

	if (min > max)
		return (NULL);
	lnght = (max - min) + 1;

	arry = malloc(lnght * sizeof(int));
	if (arry == NULL)
		return (NULL);
	for (cuntr = 0; cuntr < lnght; cuntr++, min++)
	{
		arry[cuntr] = min;
	}
	return (arry);
}
