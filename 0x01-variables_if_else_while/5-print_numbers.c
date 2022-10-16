#include <stdio.h>

/**
 * main - prints numbers 0 to 9
 *
 * Description: program prints numbers 0 to 9
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
