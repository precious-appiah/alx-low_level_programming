#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function function that returns a pointer to a 2 dimensional array of integers
 * @width: with;
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if ((width  <= 0) || (height <= 0))
		return (NULL);
	grid = malloc(width * sizeof(int *));

	for (i = 0; i <= width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
	}
	if (grid == NULL)
		return (NULL);
	return (grid);
}
