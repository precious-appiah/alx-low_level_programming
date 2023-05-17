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
	int i, k = 0;
	int m, n;
	int len;

	if ((s1 == NULL) || (s2 == NULL))
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
	for (m = 0; m < i; m++)
	{
		str_alloc[0] = s1[0];
	}
	for (n = 0; n < k; n++)
	{
		str_alloc[m + n] = s2[n];
	}

	str_alloc[m + n] = '\0';
	return (str_alloc);
}
