#include <stdio.H>

/**
 * main - Entry point
 *
 * Return:0
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n",(unsigned int)sizeof(b));
	printf("Size of an int: %lu byte(s)\n",(unsigned int)sizeof(a));
	printf("Size of a long int:%lu byte(s)\n",(unsigned int)sizeof(c));
	printf("Size of a long long int:%lu byte(s)\n",(unsigned int)sizeof(d));
	printf("Size of a float:%lu byte(s)\n",(unsigned int)sizeof(f));
	return (0);
}
