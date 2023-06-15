#include "main.h"
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - function to create file
 * @filename: name of file to be created
 * @text_content: content to write
 * Return:int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;
	int count = 0;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_WRONLY | O_APPEND);

	if (fd_open == -1 || fd_open < 3)
	{
		close(fd_open);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd_open);
		return (1);
	}

	for (count = 0; text_content[count] != '\0'; count++)
	{
	}
	count++;
	fd_write = write(fd_open, text_content, count);
	if (fd_write == -1)
	{
		close(fd_open);
		return (-1);
	}
	return (1);
}
