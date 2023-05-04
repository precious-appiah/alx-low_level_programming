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
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
