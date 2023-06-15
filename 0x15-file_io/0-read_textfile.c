#include "main.h"
/**
 * read_textfile - function to read letters
 * @filename: location of file
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f_size;
	int info_read;
	int n;
	int file_open_desc;

	if (filename == NULL)
		return (0);

	file_open_desc = open(filename, O_RDONLY);
	if (file_open_desc < 3 || file_open_desc == -1)
		return (0);

	f_size = malloc((letters) * sizeof(char));

	if (f_size == NULL)
		return (0);
	info_read = read(file_open_desc, f_size, letters);
	if (info_read == -1)
	{
		free(f_size);
		return (0);
	}
	n = write(1, f_size, info_read);
	if (n == -1)
	{
		free(f_size);
		return (0);
	}
	free(f_size);
	close(file_open_desc);
	return (n);
}
