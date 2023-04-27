#include "main.h"
/**
 * _isdigit - checks for digits betwwen 0 and 9
 * @c - parameter passed to our function
 * Return: returns 1 for true, 0 for false
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
