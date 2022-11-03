#include "main.h"
/**
 * _pow_recursion - Function returns the value of x raised to the power of y.
 * @x: Number to raise to the power of something
 * @y: Number to raise x to the power of
 *
 * Description: Function returns the value of a number x raised to the
 * power of a number y.
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

