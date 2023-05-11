#include "main.h"
/**
 * factorial - function to print factorial
 * @n: paramenter to be checked
 * Return: integer
 */
int  factorial(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (1);
	return (n * factorial(n - 1));
}
