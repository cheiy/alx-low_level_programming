#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by
 * a new line.
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by
 * a new line.
 *
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int HexNums[16] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100};
	int count = 0;

	HexNums[14] = 101;
	HexNums[15] = 102;

	while (count < 16)
	{
		putchar(HexNums[count]);
		count++;
	}
	putchar('\n');
	return (0);
}


