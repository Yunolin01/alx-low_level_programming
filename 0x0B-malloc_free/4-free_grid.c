#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - allocates a grid, makes space and frees space
 * @grid: takes in width of the grid
 * @height: height of the grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
