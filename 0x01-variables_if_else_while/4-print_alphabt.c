#include <stdio.h>

/**
 * main - prints all alphabets except q and e
 *
 * Description: Uses printchar() function to print the Alphabet
 * excluding letters q and e
 *
 * Return: 0 if successfull
 */
int main(void)
{
	char x[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	while (count < 26)
	{
		if (x[count] != 'q')
		{
			if (x[count] != 'e')
			{
				putchar(x[count]);
			}
		}
		count++;
	}
	putchar('\n');
	return (0);
}
