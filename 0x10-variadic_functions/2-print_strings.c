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
	char *str;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
