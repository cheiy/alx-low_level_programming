#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - Program copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: A pointer to an array holding the arguments passed.
 *
 * Description: Program copies the content of a file to another file.
 *
 * Return: 0 if successful, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dst, close_src, close_dst, read_retval, write_retval;
	char *error_src, *error_dst, *src_content;
	unsigned int len, len2;

	len = len2 = 0;
	error_src = "Error: Can't read from file ";
	error_dst = "Error: Can't write to ";
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	else
	{
		fd_src = open(argv[1], O_RDONLY);
		fd_dst = open(argv[2], O_CREAT | O_WRONLY, 0664);
		if (fd_src < 0)
			dprintf(STDERR_FILENO, "%s%s\n", error_src, argv[1]), exit(98);
		if (fd_dst < 0)
			dprintf(STDERR_FILENO, "%s%s\n", error_dst, argv[2]), exit(99);
		len = str_len(argv[1]);
		src_content = malloc(sizeof(char) * len);
		if (src_content == NULL)
			return (-1);
		read_retval = read(fd_src, src_content, len);
		if (read_retval == 98)
			dprintf(STDERR_FILENO, "%s%s\n", error_src, argv[1]), exit(98);
		src_content[len + 1] = '\0';
		while (src_content[len2] != '\0')
		{
			write_retval = dprintf(fd_dst, "%c", src_content[len2]);
			if (write_retval < 0)
				dprintf(STDERR_FILENO, "%s%s\n", error_dst, argv[2]), exit(99);
			len2++;
		}
		close_src = close(fd_src), close_dst = close(fd_dst);
		if (close_src != 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_src), exit(100);
		if (close_dst != 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_dst), exit(100);
		free(src_content);
		return (0);
	}
}
/**
 * str_len - Function gets the length of a string.
 * @str: The string whose length we are to calculate.
 * Description: Function gets the length of a string.
 *
 * Return: The length of the string
 */
unsigned int str_len(char str[])
{
	unsigned int len;
	int fd;

	len = 0;
	fd = open(str, O_RDONLY);
	if (fd < 0)
		exit(EXIT_FAILURE);
	len = lseek(fd, 0L, SEEK_END);
	return (len);
}
