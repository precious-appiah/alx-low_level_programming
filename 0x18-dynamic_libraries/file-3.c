#include "main.h"

/**
 * _strncat- function name
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
/**
 * _strncpy- function name
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

/**
 * _strncmp- function name
 * @s1: param1
 * @s2: param2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}

/**
 * _memset- function name
 * @s: param1
 * @b: param2
 * @n: param3
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

/**
 * _memcpy- function name
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
