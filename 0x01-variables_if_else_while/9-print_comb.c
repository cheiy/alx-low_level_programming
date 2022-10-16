#include <stdio.h>
/**
 * main - This program prints all possible combinations of single-digit numbers
 *
 * Description: Program prints all possible combinations of single-digit
 * numbers separated by commas
 *
 * Return: 0 if it runs successfully
 *
 */
int main(void)
{
	int count;

	count = 48;

	while (count <= 57)
	{
		putchar(count);
		if (count != 57)
		{
			putchar(44);
			putchar(32);
		}
		count++;
	}
	putchar('\n');
	return (0);
}
