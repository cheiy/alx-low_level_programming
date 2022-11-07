#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints the number of arguments passed into it.
 * @argc: Argument counter.
 * @argv: Array of pointers to the arguments passed to the program.
 *
 * Description: Program prints the number of arguments passed into it.
 *
 * Return: 0 if executed successfully, 1 otherwise.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
