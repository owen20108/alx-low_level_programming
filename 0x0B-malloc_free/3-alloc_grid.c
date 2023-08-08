#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid -  return- a pointer 2D array of integers
 * @width: width of  matrix
 * @height: height of  matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arry;
	int cntr1, cntr2;

	if (height <= 0 || width <= 0)
		return (NULL);

	arry = (int **) malloc(sizeof(int *) * height);

	if (arry == NULL)
		return (NULL);

	for (cntr1 = 0; cntr1 < height; cntr1++)
	{
		arry[cntr1] = (int *) malloc(sizeof(int) * width);
		if (arry[cntr1] == NULL)
		{
			free(arry);
			for (cntr2 = 0; cntr2 <= cntr1; cntr2++)
				free(arry[cntr2]);
			return (NULL);
		}
	}

	for (cntr1 = 0; cntr1 < height; cntr1++)
	{
		for (cntr2 = 0; cntr2 < width; cntr2++)
		{
			arry[cntr1][cntr2] = 0;
		}
	}
	return (arry);
}
