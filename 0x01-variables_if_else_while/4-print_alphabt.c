#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; l <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

