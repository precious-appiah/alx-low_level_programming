#include "main.h"
#include <stdio.h>
/**
 *_strcpy- function to copy
 *@dest: first param
 *@src: second param
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
