#include "main.h"
#include <stdlib.h>
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
	int divisors;
	int j;
	long int largest_prime_number;
	long int largest_prime_factor;

	long int num = 612852475143;

	printf("Prime Numbers are: -\n");

	for (i = 2; i <= num / 2; i++)
	{
		divisors = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				divisors++;
			}
		}
		if (divisors == 2)
		{
			largest_prime_number = i;
			if (num % largest_prime_number == 0)
			{
				largest_prime_factor = largest_prime_number;
			}

		}
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}

