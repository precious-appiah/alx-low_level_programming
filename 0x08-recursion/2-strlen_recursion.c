#include "main.h"
/**
 * _strlen_recursion - function to return length of a string
 * @s: string passed
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i + 1);
}
