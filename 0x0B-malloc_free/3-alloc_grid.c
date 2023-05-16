#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer  array of integers
 * @width: with;
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if ((width  <= 0) || (height <= 0))
		return (NULL);
	grid = (int **)malloc(width * sizeof(int *));

	for (i = 0; i <= width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
	}
	if (grid == NULL)
		return (NULL);

	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
