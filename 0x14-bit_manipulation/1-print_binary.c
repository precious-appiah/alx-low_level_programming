#include "main.h"
/**
 * print_binary - function to convert decimal to binary
 * @n: number to be converted
 * Return: nothng
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
			_putchar('0');
		mask >>= 1;
	}
}