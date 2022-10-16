#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Description: Prints lowercase alphabet in reverse
 * printf() now allowed, only putchar().
 * putchar() can only be used twice
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 25;

	while (count >= 0)
	{
		putchar(alpha[count]);
		count--;
	}
	putchar('\n');

	return (0);
}
