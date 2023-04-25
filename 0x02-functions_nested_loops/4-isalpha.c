#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: The character to be checked
 * Return: return an integer 1 or zero
*/
int _isalpha(int c)
{
	if ((c <= 97 && c >= 122) || (c <= 65 && c >= 90))
		return (1);
	else
		return (0);
}
