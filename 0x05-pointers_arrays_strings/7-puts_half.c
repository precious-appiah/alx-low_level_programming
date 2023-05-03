#include "main.h"
/**
 * puts_half- function to print half
 * @str: parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int z;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	len = i / 2;
	for (z = 0; z <= len; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
