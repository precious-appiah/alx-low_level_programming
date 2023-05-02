#include "main.h"
/*
 * swap_int : function for swapping
 * swap_int - function swaps values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
