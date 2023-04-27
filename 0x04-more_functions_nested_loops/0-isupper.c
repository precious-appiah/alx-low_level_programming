#include "main.h"
/**
 * _isupper - checks if alphabet is upper or lower
 * @c --is the parameter passed
 * Return: 1 for true and 0 for false
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
