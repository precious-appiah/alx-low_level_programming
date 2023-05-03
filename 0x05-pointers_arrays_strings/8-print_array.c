#include "main.h"
/**
 * print_array- function to print array
 * @a: first param
 * @n: second parameter
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;
	int len = n - 1;

	for (i = 0; i < len; i++)
	{
		printf("%d, ", a[i]);
	}
	if (n > 0)
		printf("%d\n", a[n - 1]);
	else
	{
		printf("\n");
	}
}
