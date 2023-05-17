#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *str_alloc;
	int i = 0;
	int k = 0;
	int m, n;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + k) != '\0')
	{
		k++;
	}
	len = i + k + 1;
	str_alloc = malloc(sizeof(char) * len);

	if (str_alloc == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
	{
		str_alloc[m] = s1[m];
	}
	for (n = 0; n < k; n++)
	{
		str_alloc[m + n] = s2[n];
	}

	str_alloc[m + n] = '\0';
	return (str_alloc);
}
