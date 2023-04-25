#include "main.h";
/**
 * print_alphabet - print lower case alphabets
 * Return: void
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
