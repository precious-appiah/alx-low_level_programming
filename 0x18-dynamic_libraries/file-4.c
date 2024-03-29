#include "main.h"

/**
 * _strchr - function name
 * @s: param1
 * @c:param2
 * Return: char
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

/**
 * _strspn - function name
 * @s: param1
 * @accept:param2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

/**
 * _strpbrk - function name
 * @s: param1
 * @accept:param2
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

/**
 * _strstr - function name
 * @haystack: param1
 * @needle:param2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
