#include "main.h"
#include <stdio.h>
/**
 * main - function to print all characters
 * @argc: parameter count
 * @argv: arguments vector
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
