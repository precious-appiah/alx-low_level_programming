#include <stdio.h>

/**
 * main - function to print
 * @ac: count
 * @av: araay of elements
 */

int main(int ac, char **av)
{
	int i = 0;

	printf("%d", ac);
	while (av[i])
	{
		printf("%s", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
