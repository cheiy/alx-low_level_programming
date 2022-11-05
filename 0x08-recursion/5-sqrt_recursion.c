#include "main.h"
/**
 * _sqrt_recursion - Function returns the natural square root of a number.
 * @n: The number to find the root of.
 *
 * Desription: Function finds the natural square root of a number.
 *
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	int sqrt;
	int divisor;

	divisor = 2;
	if (n == 1)
	{
		sqrt = 1;
	}
	if (n == 2 || n == -1)
	{
		sqrt = -1;
	}
	if ((n / divisor * n / divisor) > n)
	{
		if (n % 2 == 0)
		{
			divisor = divisor + 2;
			if (n / divisor * n / divisor == n)
			{
				sqrt = n / divisor;
			}
			else
			{
				sqrt = _sqrt_recursion(n / divisor);
			}
		}
		else
		{
			divisor++;
			sqrt = _sqrt_recursion(n / divisor);
		}
	}
	return (sqrt);
}
