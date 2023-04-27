#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9 using _putchar
 *@void: takes no parameter
 *Return: nothing
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
int main(void)
{
    print_numbers();
    return (0);
}
