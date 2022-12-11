#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
/**
 * main - Program displays the information contained in the ELF header
 * @argc: Number of arguments passed to the program.
 * @argv: Pointer to array containing the arguments.
 * at the start of an ELF file.
 *
 * Return: 0 if executed successfully, 98 otherwise.
 */
int main(int argc, char *argv[])
{
	int elf_fd, len, i;
	char *content;
	/*Elf64_Ehdr header;*/

	i = 0;
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		return (98);
	}
	elf_fd = open(argv[1], O_RDONLY);
	if (elf_fd == -1)
		printf("Error: Could not open file\n");
	len = 19;
	content = malloc(sizeof(char) * len);
	read(elf_fd, content, len);
	if (content[1] != 'E' && content[2] != 'L' && content[3] != 'F')
	{
		free(content);
		dprintf(STDERR_FILENO, "%s is not an ELF file", argv[1]);
		exit(98);
	}
	else
	{
		dprintf(STDOUT_FILENO, "ELF Header:\n");
		dprintf(STDOUT_FILENO, "  Magic:");
		/*header.e_ident[0] = 'E';
		header.e_ident[1] = 'L';
		header.e_ident[2] = 'F';*/
		while (i <= 19)
		{
			if (i == 15)
				dprintf(STDOUT_FILENO, "%02x\n", content[i]);
			else if (i < 16)
				dprintf(STDOUT_FILENO, " %02x ", content[i]);
			i++;
		}
		i = 5;
		while (i <= 19)
		{
			if (i == 5)
				dprintf(STDOUT_FILENO, "\n  Class: %02x\n", content[i]);
			if (i == 6)
				dprintf(STDOUT_FILENO, "\n Data: %02x\n", content[i]);
			if (i == 7)
				dprintf(STDOUT_FILENO, "\n Version: %02x\n", content[i]);
			i++;
		}
			
	}
	return (0);
}
