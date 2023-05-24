#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: first param, name
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
