#include "main.h"
/**
 * print_sign - function prints the sign of a number
 * @n: The number we are checking
 *
 * Description - function prints the sign of a number
 *
 * Return: 1 if number is positive, 0 if number is zero
 * and -1 if the number is less than zero
 */

int print_sign(int n)
{
	int retval;

	if (n > (unsigned char)(48))
	{
		retval = +1;
		_putchar(43);
	}
	else if (n < (unsigned char)(0))
	{
		retval = -1;
		_putchar(45);
	}
	else
	{
		retval = 0;
	}

	return (retval);
}
