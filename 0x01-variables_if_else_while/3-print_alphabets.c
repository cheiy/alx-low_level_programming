#include <stdio.h>

/**
 * main - prints alphaBETS using the putchar function
 *
 * Description: Uses printchar() function at most thrice to print
 * the Alphabet in both lower and upper cases
 *
 * Return: 0 if successfull
 */
int main(void)
{
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count = 0;

	while (count < 52)
	{
		putchar(x[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
