#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees malloc memory
 * @grid: 2D grid
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i <= height)
	{
		free(grid[i]);
		i++;
	}
}
