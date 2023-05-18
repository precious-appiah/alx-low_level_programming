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
	char *arr_alloc;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	arr_alloc = malloc(size * nmemb);

	if (arr_alloc == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		arr_alloc[i] = 0;
	return (arr_alloc);
}
