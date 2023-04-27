#include "main.h"
/**
 * print_diagonal - print lines using putchar
 * @n: takes no parameter
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
