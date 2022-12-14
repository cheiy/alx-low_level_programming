#include "main.h"
/**
 * append_text_to_file - Function appends text to the end of a file.
 * @filename: The file name which we are to add text.
 * @text_content: The file content to be added.
 *
 * Description: Function appends text to the end of a file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (text_content == NULL && fd < 0)
			return (-1);
		if (text_content == NULL)
			return (1);
		if (fd < 0)
			return (-1);
		dprintf(fd, "%s", text_content);
		close(fd);
		return (1);
	}
	else
		return (-1);
}

