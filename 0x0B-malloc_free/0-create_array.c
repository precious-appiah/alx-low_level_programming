#include "main.h"
/**
 * create_array- function
 * @size: size of malloc
 * @c: should contain array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (null);
	char *char_alloc;

	char_alloc = malloc(sizeof(char) * size);
	char_alloc[0] = 'R';
	return (char_alloc);
}
