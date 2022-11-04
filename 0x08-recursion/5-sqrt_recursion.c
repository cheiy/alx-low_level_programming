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
	if ((n / 2 * n / 2) <= n && ((n / 2 + 1) * (n / 2 + 1)) > n)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n / 2 + 1));
	}
}
