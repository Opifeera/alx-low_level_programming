#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees grid created by alloc_grid function
 *
 * @grid: grid
 * @height: vertical dimension
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
