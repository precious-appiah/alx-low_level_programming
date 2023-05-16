#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *str_alloc;
	char str_cat;
	int i, k, l, m = 0;
	int len;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		i++;
	}

	while (*(s2 + k) != '\0')
	{
		k++;
	}
	len = i + k + 1;

	str_alloc = malloc((sizeof(char) * len) + 1);

	if (str_alloc == NULL)
		return (NULL);
	while (j <= i)
	{
		str_cat[j] = s1[j];
		j++;
	}
	while (m <= k)
	{
		str_alloc[j] = str[l];
		j++;
	}
	return (str_alloc);
}
