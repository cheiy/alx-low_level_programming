#include "main.h"
/**
 * is_prime_number - Function returns 1 if input is a prime number.
 * @n: The number.
 *
 * Description: Function returns 1 if the input is a prime number.
 *
 * Return: 1 if prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int div_by_2;
	int is_prime;

	div_by_2 = n / 2;
	if (div_by_2 != 1)
	{
		if (n % div_by_2 != 0)
		{
			div_by_2 = div_by_2 - 1;
			is_prime = is_prime_number(n);
		}
		else
		{
			is_prime = 0;
		}
	}
	else
	{
		is_prime = 1;
	}
	return (is_prime);
}
