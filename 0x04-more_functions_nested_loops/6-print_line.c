#include "main.h"
/**
 * print_line - print lines using putchar
 * @n: takes no parameter
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
