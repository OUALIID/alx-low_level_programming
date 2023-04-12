#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Release memory allocated to a two-dimensional
 * grid of integers (the grid) with a specified height
 * @grid: Refers to the input grid
 * @height: Refers to the input Height
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
