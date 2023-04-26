#include "main.h"
/**
  * _abs - Computes the absolute value of an integer.
  * @val: The number to be computed.
  *
  * Return: Absolute value of number or zero
*/
int _abs(int val)
{
	int result;

	if (val < 0)
	{
		result = val * -1;
		return (result);
	}
	return (val);
}
