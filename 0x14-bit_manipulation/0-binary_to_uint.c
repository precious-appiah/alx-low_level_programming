#include "main.h"

/**
 * binary_to_uint - function to convert binary to decimal
 * @b: binary number passed to function
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i != '\0'; i++)
	{

		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
