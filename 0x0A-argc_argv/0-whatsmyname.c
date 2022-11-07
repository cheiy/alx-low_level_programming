#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints its name followed by a new line.
 * @argc: Argument counter
 * @argv: Array of pointers to the arguments passed to main.
 *
 * Description: Program prints its name followed by a new line.
 *
 * Return: 0 if run successfully, 1 otherwise.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
