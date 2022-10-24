#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Program finds and prints the larget prime factor of
 * the number 612852475143
 *
 * Description: Finds & prints the largest prime factor of the number
 * 612852475143
 *
 * Return: 0 if it runs successfully
 *
 */
int main(void)
{
	long int i;

	long int num = 612852475143;

	while (num % 2 == 0)
	{
		num = num / 2;

	}
	for (i = 3; i <= sqrt(num) ; i = i + 2)
	{
		while (num % i == 0)
		{
			num = num / i;
		}

	}
	if (num > 2)
	{
		printf("%ld\n", num);
	}
	return (0);
}

