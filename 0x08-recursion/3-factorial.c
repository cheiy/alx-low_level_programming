#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: Number for which to calculate the factorial
 *
 * Description: Returns the factorial of a given number.
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	int f;

	if (n > 0)
	{
		f = n * factorial(n - 1);
	}
	if (n == 0)
	{
		f = 1;
	}
	if (n < 0)
	{
		f = -1;
	}
	return (f);
}
