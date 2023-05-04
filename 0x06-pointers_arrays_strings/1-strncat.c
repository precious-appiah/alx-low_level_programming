#include "main.h"
/**
 * *_strncat- concat string
 * @dest: destination of strings
 * @src: second paran
 * @n: specifies number og chars to be added to the first
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != src[n])
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (result);
}
