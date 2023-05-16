#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string passed
 * Return: char
 */
char *_strdup(char *str)
{
	char *str_alloc;
	int i, k = 0;
	int len;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	len = i++;

	str_alloc = malloc(sizeof(char) * len);

	if (str_alloc == NULL)
		return (NULL);
	while (j <= len)
	{
		str_alloc[j] = str[j];
		j++;
	}
	while (*(str_alloc + k) != '\0')
	{
		k++;
	}
	k++;

	if (k != len)
		return (NULL);
	return (str_alloc);
}
