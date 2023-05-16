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
	if (size == 0)
		return (NULL);

	c = malloc(sizeof(char) * size);
	c[0] = 'R';
	return (char_alloc);
}
