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
	int dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && (*(src + i) != '\0'); i++)
	{
		*(dest + dest_len) = *(src + i);
		i++;
		dest_len++;
	}
	*(dest + i) = '\0';
	return (dest);
}
