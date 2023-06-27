#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *buffer, *token, *delim = " ", new_str;
	size_t n = 10;
	int line_read;
	pid_t pid;
	char *argv[] = {"/bin/ls", ,NULL}

	buffer = malloc(sizeof(char) * n);
	if (buffer == NULL)
	{
		free(buffer);
		return(-1);
	}

	printf("->");
	line_read = getline(&buffer, &n, stdin);

	new_str = malloc(sizeof(char) * line_read);
	if (new_str == NULL)
	{
		free(new_str);
		return (-1);
	}
	strcpy(new_str, buffer);

	if(line_read != -1)
	{
		token = strtok(new_str, delim);
		while (token)
			token(NULL, delim);

	}


	//break itt down 
	//execv- /bin/argv[0] argv, Null
	return (0);
}
