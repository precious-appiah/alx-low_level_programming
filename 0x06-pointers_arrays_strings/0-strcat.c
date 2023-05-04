#include "main.h"
/**
 * *_strcat - function that concats two strings
 * @dest: first param
 * @src: second param
 * Return:a char
 */
char *_strcat(char *dest, char *src)
{
	char *add = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (add);
}
