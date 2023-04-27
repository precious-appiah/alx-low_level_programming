#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9 using _putchar
 *@void: takes no parameter
 *Return: nothing
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
int main(void)
{
    print_numbers();
    return (0);
}
