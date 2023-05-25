#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function to print all numbers
 * @separator: separator
 * @n: first param
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
