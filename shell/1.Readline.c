#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buffer;
	ssize_t is_read;

	buffer = malloc(n * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}
	printf("$ ");
	is_read = getline(&buffer, &n, stdin);
	if (is_read != -1)
	{
		printf("%s", buffer);
	}
	free(buffer);
	return (0);
}
