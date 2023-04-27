#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9 using _putchar
 *@void: takes no parameter
 *Return: nothing
 */
void print_numbers(void)
{
	char num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
