#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: Number of rows.
  * @height: Number of columns.
  *
  * Return: A pointer to a 2D array of integers or NULL on failure or if width
  * or height is 0 or negative.
  */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
