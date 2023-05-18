#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: first param
 * @size: second param
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_alloc;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	arr_alloc = malloc(size * nmemb);

	if (arr_alloc == NULL)
		return (NULL);
	return (arr_alloc);
}
