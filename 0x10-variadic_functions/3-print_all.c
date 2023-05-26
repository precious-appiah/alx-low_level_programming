#include "variadic_functions.h"
/**
 * print_all - function that prints all characters
 * @format: parameter passed
 * Return:nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *str;

	va_start(arg, format);
	while (*(format + i) != "\0")
	{
		if (*(format + i) != NULL)
		{
			switch (*(format + i))
			{
				case "i":
					printf("%d", va_arg(arg, int));
					break;
				case "c":
					printf("%c", va_arg(arg, char));
					break;
				case "f":
					printf("%f", va_arg(arg, float));
					break;
				case "s":
					str = va_arg(arg, char*);
					printf("%s", va_arg(arg, char*));
					break;
			}
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
