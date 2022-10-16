#include<stdio.h>

/**
 * main - Program prints single digit numbers of base 10
 *
 * Description: Program prints all single digits of base 10
 * starting from 0. char type not allowed. printf also forbidden.
 * To use only putchar() function
 *
 * Return: 0 if successful
 */
int main(void)
{
	/*int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};*/
	int count = 48;

	while (count < 58)
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
