#include<stdio.h>

/**
 * main - Prints a geeky quote by Dora Korpar
 *
 * Description: Program prints a quote by Dora Korpar, followed
 * by a new line.
 *
 * Return: 1 if successful
 */

#define STDOUT_FILENO 2

int main(void)
{
	printf("and that piece of art is useful");
	printf("- Dora Korpar, 2015-10-19\n");

	return (1);
}
