#include<stdio.h>

/**
 * main - Prints a geeky quote by Dora Korpar
 *
 * Description: Program prints a quote by Dora Korpar, followed
 * by a new line.
 *
 * Return: 1 if successful
 */


int main(void)
{
	fwrite("and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n", 60, 1, stderr);

	return (1);
}
