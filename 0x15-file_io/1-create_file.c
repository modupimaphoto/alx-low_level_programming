#include "main.h"

/**
 * create_file - creates a file.
 * @filename:  the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1;
	ssize_t len, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
