#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9 using _putchar
 *@void: takes no parameter
 *Return: nothing
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
