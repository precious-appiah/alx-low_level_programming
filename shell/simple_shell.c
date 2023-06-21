#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *buffer, *token, *delim = " ";
	size_t n = 10;
	int line_read;

	buffer = malloc(sizeof(char) * n);
	if (buffer == NULL)
	{
		free(buffer);
		return(-1);
	}

	printf("->");
	line_read = getline(&buffer, &n, stdin);

	if(line_read != -1)
	{


	//break itt down 
	//execv- /bin/argv[0] argv, Null
	return (0);
}
