#include "main.h"
/**
 * *string_toupper - function to convert to upper
 * @str: para
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + 1) = *(str + 1) - 'a' - 'A';
		}
		i++;
	}
	return (str);
}
