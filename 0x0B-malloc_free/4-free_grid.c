#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid
 * created by alloc_grid()
 * @grid: grid to free it
 * @height: height of  grid
 */
void free_grid(int **grid, int height)
{
	int cntr;

	if (grid == NULL || height == 0)
		return;

	for (cntr = 0; cntr < height; cntr++)
		free(grid[cntr]);

	free(grid);
}
