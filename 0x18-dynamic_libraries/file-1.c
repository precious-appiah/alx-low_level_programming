#include "main.h"
/**
 * _islower - function name
 * @c: param
 * Return: int
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - function name
 * @c: param
 * Return: int
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - function name
 * @n: param
 * Return: int
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * _isupper - function name
 * @c: param
 * Return: int
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - function name
 * @c: param
 * Return: int
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
