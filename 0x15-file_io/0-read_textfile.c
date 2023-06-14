#include "main.h"
/**
 * read_textfile - function to read letters
 * @filename: location of file
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *f_size;
	ssize_t info_read;

	fp = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (fp == NULL)
		return (0);

	f_size = malloc((letters + 1) * sizeof(char));

	if (f_size == NULL)
		return (0);

	info_read = fread(f_size, sizeof(char), (letters + 1), fp);
	f_size[info_read] = '\0';
	printf("%s", f_size);
	/**write(1, f_size, (letters + 1));*/
	return (info_read);
}
