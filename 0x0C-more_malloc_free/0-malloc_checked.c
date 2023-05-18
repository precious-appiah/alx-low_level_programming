#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(sizeof(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
