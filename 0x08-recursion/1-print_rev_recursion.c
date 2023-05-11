#include "main.h"
/**
 * _print_rev_recursion - function to reverse a string
 * @s: string to be reversed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
