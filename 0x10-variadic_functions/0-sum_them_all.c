#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum values
 * @n: first parameter
 * Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list other_args;

	va_start(other_args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(other_args, int);
	}
	va_end(other_args);
	return (sum);
}
