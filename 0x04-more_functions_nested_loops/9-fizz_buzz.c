#include "main.h"
#include <stdio.h>
/**
 * main- contain code
 * @void: takes no param
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (1 % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
