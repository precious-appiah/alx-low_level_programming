#include "main.h"
/**
 **_strncpy- function to copy
 * @dest: first param
 * @src: second param
 * @n: no ofchars to be copies
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while  (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
