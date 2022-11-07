#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints all arguments it receives.
 * @argc: Number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Description: Program prints all arguments it receives.
 *
 * Return: 0 if successfully executed and 1 otherwise.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
