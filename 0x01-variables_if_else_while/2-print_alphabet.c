#include <stdio.h>

/**
 * main - prints alphabet using the putchar function
 *
 * Description: Uses printchar() function at most twice to print
 * the Alphabet
 *
 * Return: 0 if successfull
 */
int main(void)
{
	char x[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (count < 27)
	{
		putchar(x[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
