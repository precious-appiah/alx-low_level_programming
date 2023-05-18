#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *range_alloc, len, i;

	if (max < min)
		return (NULL);
	len = max - min + 1;
	range_alloc = malloc(sizeof(int) * len);
	if (range_alloc == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		range_alloc[i] = min;
		min++;
	}
	return (range_alloc);
}
