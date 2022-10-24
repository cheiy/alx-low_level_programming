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
	long int divisors, j, prime_number, a, factor, position;
	int factors[500000];

	long int num = 612852475143;
	/*long int num = 123195200000;*/

	for (i = 4019; i <= num / 4019; i++)
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
			prime_number = i;
			a = 0;
			while (a < 500000)
			{
				if (num % prime_number == 0)
				{
					factors[a] = prime_number;
				}
				a++;
			}
		}
	}
	for (factor = 1; factor < 500000; factor++)
	{
		if (factors[factor] > factors[position])
		{
			position = factor;
		}
	}
	printf("%d\n", factors[position]);
	return (0);
}

