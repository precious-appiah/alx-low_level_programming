#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *alloc;

	alloc = malloc(sizeof(unsigned int) * 1);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
