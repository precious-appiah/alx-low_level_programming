#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
	char *str = "Hello World";
	char *delim = " ";
	char *token;
	char *str_arr;

	str_arr = malloc(sizeof(char) * strlen(str));
	if (str_arr == NULL)
		return (-1);

	strcpy(str_arr, str);

	token = strtok(str_arr, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
