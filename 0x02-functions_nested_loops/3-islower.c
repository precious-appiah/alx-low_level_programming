#include "main.h"
/**
 * _islower - code returns 1 for lower
 * int c - parameter of integer
 * @c: The character to be checked
 * Return: return and integer 1 or zero
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
