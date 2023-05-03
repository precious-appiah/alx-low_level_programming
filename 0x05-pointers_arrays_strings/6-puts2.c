#include "main.h"
/**
 * puts2 - function t print charactter
 * @str: parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
