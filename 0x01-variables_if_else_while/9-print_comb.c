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
	int count1, count2;

	count1 = 48;
	count2 = 49;

	while (count1 <= 57)
	{
		while (count2 <= 57)
		{
			putchar(count1);
			putchar(count2);
			putchar(44);
			putchar(32);
			count2++;
		}
		count2 = 49;
		count1++;
		
	}
	return (0);
}

