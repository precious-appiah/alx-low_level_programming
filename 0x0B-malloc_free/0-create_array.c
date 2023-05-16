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

	char *char_alloc;

	char_alloc = malloc(sizeof(char) * size);
	char_alloc[0] = c;
	return (char_alloc);
}
