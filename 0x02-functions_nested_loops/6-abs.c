#include "main.h"
/**
 * _abs - calculates the absolute value of a given value
 * @n:  the value for which to calculate the absolute value
 *
 * Description: absolute value of a given value.
 *
 * Return: absolute value of n
 *
 */
int _abs(int n)
{
	int n_abs;

	if (n < 0)
	{
		n_abs = -1 * n;
	}
	else if (n >= 0)
	{
		n_abs = n;
	}

	return (n_abs);
}
