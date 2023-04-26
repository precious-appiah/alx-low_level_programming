#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @num: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int num)
{
	int r = num % 10;

	if (r < 0)
		r = r * -1;
	_putchar(r + '0');
	return (r);
}
