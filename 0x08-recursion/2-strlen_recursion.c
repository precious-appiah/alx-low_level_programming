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
		_strlen_recursion(s + i);
	}
	return (i + 1);
}
