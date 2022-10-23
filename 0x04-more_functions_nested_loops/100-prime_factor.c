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
	/*int primes[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 43};8*/
        long int i;
	int divisors;
	int j;
	long int largest_prime_factor;

	long int num = 612852475143;

	for (i = 2; i <= num / 2; i++)
	{
		divisors = 0;
		for(j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				divisors++;
			}
		}

		if(divisors ==  2)
		{
				
			largest_prime_factor = i;
		}
	}
	printf("The largest prime factor of the number is:  %ld", largest_prime_factor);
	return (0);
}

