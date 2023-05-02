#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
