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
	char *str_cat;
	int i, k, m = 0;
	int len;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		str_cat[i] = s1[i];
		i++;
	}
	i = i + 1;
	while (*(s2 + k) != '\0')
	{
		str_cat[i] = s2[k];
		i++;
		k++;
	}
	len = i + 1;
	str_alloc = malloc((sizeof(char) * len) + 1);

	if (str_alloc == NULL)
		return (NULL);
	while (m <= len)
	{
		str_alloc[m] = str_cat[m];
		m++;
	}
	return (str_alloc);
}
