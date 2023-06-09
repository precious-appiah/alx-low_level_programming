#include "main.h"

/**
 * get_bit- function that returns the value at an idx
 * @n: integer
 * @index: index
 * Return:int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	int i = 0;

	if (n == 0 && i == index)
		return (0);
	while (n != 0)
	{
		val = n % 10;
		n = n / 10;
		if (i == index)
			return (val);
	}
}
