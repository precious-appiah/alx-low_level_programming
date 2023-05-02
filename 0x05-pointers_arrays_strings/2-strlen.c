#include "main.h"
/**
 * _strlen- gets the length of a char
 * @s: parameter passed to it
 * Return: an integer
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
