#include "main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
 */
void times_table(void)
{
	int num1, num2, result, u, d;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;

			if (result > 9)
			{
				u = result % 10;
				d = (result - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (num2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(result + '0');
			}
		}

		_putchar('\n');
	}
}
