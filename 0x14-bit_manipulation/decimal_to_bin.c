#include "main.h"
/**
 * decimal_to_bin- function to convert decimal to bin
 * @n: decimal passed
 * Return:string
 */
char *decimal_to_bin(unsigned long int n)
{
	int index = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	char* binary = (char*) malloc((sizeof(unsigned long int) * 8) + 1);
	
	if (binary == NULL)
		return NULL;
	while (mask != 0)
	{
		if ((n & mask) != 0)
			binary[index] = '1';
		else
			binary[index] = '0';
		mask >>= 1;
		index++;
	}
	binary[index] = '\0';
}
