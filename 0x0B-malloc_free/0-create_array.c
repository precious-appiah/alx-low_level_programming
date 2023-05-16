#include "main.h"
#include <stdlib.h>
/**
 * create_array- function
 * @size: size of malloc
 * @c: should contain array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *char_alloc;
	int i = 0;

	if (size == 0)
		return (NULL);

	char_alloc = malloc(sizeof(char) * size);
	if (char_alloc == NULL)
		return (1);
	while (i < size)
	{
		char_alloc[i] = c;
		i++;
	}
	return (char_alloc);
}
