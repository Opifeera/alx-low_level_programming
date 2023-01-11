#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: hor
 * @height: ver
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **box;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	box = malloc(sizeof(int *) * height);

	if (box == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		box[i] = malloc(sizeof(int) * width);
		if (box[i] == NULL)
		{
			free(box);
			return (NULL);
		}
	}

	for (i = 0; j < width; j++)
		box[i][j] = 0;
	return (box);
}
