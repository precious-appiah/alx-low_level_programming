#include "main.h"

int main(argc, argv)
{
	int file_from, file_to, close_from, close_to, read_fd, write_fd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_fd = read(file_from, buffer, 1024);
	while ((read_fd = read(file_from, buffer, 1024)) == 1024)
	{
		if (read_fd == -1)
		{
			dprintf(2, " Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_fd = write(file_to, buffer, 1024);
		if (write_fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from || close_to == -1)
	{
		dprintf(2, " Error: Can't read from file %d\n", file_fom);
		exit(100);
	}
}
