#include "variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: first param
 * @n: number of params
 * Return: nthing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (va_arg(arg, char*) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(arg, char*))
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
