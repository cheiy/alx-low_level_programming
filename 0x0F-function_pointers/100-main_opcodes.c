#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints its own opcodes.
 *
 * Description - Program prints its own opcodes.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (sizeof(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
