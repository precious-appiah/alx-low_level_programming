#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numbber of chars of s2 to be added to s1
 * Return:char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_alloc;
	unsigned int i = 0, j = 0, k = 0, l = 0;
	unsigned int m, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	if (n >= j)
	{
		m = j--;
		len = i + j + 1;
	}
	else
	{
		m = n;
		len = i + n + 1;
	}
	str_alloc = malloc(sizeof(char) * len);
	if (str_alloc == NULL)
		return (NULL);
	while (k < i)
	{
		str_alloc[k] = s1[k];
		k++;
	}
	while (l < m)
	{
		str_alloc[i + l] = s2[l];
		l++;
	}
	str_alloc[len] = '\0';
	return (str_alloc);
}
