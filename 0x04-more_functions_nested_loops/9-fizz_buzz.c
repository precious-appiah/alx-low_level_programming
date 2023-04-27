#include "main.h"
#include <stdio.h>
/**
 * main- contain code
 * @void: takes no param
 * Return: nothing
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (1 % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}