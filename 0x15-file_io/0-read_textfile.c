#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file name.
 * @letters: he number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	ssize_t bytes_written;
	char *buffer = malloc(sizeof(char) * letters);
	FILE *file;

	if (filename == NULL || buffer == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	bytes_read = fread(buffer, sizeof(char), letters, file);
	fclose(file);

	if (bytes_read == 0)
		return (0);

	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	free(buffer);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
