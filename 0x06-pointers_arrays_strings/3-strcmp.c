#include "main.h"
/**
 * _strcmp - function to compare
 * @s1: first param
 * @s2: second param
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (*(s1 + i) < *(s2 + 1))
		return (-1);
	else if (*(s1 + i) == *(s2 + 1))
		return (0);
	else
		return (1);
}
