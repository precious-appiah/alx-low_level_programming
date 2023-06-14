#include "main.h"
#include <sys/stat.h>
#include <string.h>

int fileExists(const char *filename);
/**
 * create_file - function to create file
 * @filename: name of file to be created
 * @text_content: content to write
 * Return:int
 */

int create_file(const char *filename, char *text_content)
{
	/*return 0 if exist, -1 if it doesn't */
	FILE *fp;
	char *storage;
	mode_t grp_perm = ~S_IRWXG;
	mode_t oth_perm = ~S_IRWXG;
	size_t count;
	int result;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");

	storage = malloc(strlen(text_content) * sizeof(char));

	if (storage == NULL)
		return (-1);
	count = fwrite(storage, sizeof(char), strlen(text_content), fp);

	if (count != strlen(text_content))
		return (-1);
	fclose(fp);

	/*set permissions*/
	result = chmod("example.txt", S_IRUSR | S_IWUSR | grp_perm | oth_perm);
	if (result != 0)
		return (-1);
	return (1);
}
/*
 * int fileExists(const char *filename)
 * {
 * struct stat buffer;
 * return (stat(filename, &buffer) == 0);
 * }
*/
