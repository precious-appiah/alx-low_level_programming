#include "main.h"

int convert_to_num(const char *b);

/**
 * binary_to_uint- function to convert binary to int
 * @b: string passed;
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int val, n;
	int weight = 1;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	n = convert_to_num(b);

	while (n != 0)
	{
		val = n % 10;
		decimal = decimal + (weight * val);
		weight *= 2;
		n = n / 10;
	}
	return (decimal);
}

/**
 * convert_to_num - function to covert string to num
 * @b: string passed
 * Return: int
 */
int convert_to_num(const char *b)
{
	int i = 0;
	int num = 0;

	if (b[0] == '\0')
	{
		return (0);
	}
	while (*(b + i) != '\0')
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		num = num * 10 + (b[i] - '0');
		i++;
	}
	return (num);
}
