#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char *argv[] = {"/usr/bin/ls", "-l", "/tmp", NULL};
	pid_t pid;
	int exec, i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == -1)
			return (-1);
		if (pid == 0)
		{
			exec = execve(argv[0], argv, NULL);

			if (exec == -1)
				return (-1);
		}
	
		else
		{
			wait(NULL);
			printf("in parent process\n");
		}
	}
	return (0);
}
