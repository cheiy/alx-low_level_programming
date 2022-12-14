#include "main.h"
#include <stdio.h>
/**
 * create_file - Function creates a file
 * @filename: The name of the file to create
 * @text_content: NULL terminated string to write to the file.
 *
 * Description - Function creates a file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	close(fd);

	fd = open(filename, O_WRONLY);
	if (fd < 0)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}
	write(fd, text_content, len);
	close(fd);

	return (1);
}
