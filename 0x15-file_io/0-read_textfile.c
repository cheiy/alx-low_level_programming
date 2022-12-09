#include "main.h"
/**
 * read_textfile - Function reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Pointer to the filename.
 * @letters: The number of letters it should read and print
 *
 * Description: Function reads a text file and prints it to the POSIX
 * standard output.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num, len;
	char *buf;

	num = 0;
	len = 0;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	close(fd);
	while (buf[len] != '\0')
	{
		dprintf(STDOUT_FILENO, "%c", buf[len]);
		len++;
		num++;
	}
	free(buf);
	return (num);
}
