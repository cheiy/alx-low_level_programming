#include "main.h"
/**
 * print_number - Funtion that prints an integer.
 * @n: Integer to print
 *
 * Description: Prints an integer using _putchar only.
 *
 * Return: 0 always.
 *
 */
void print_number(int n)
{
	int num, rem;

	num = n;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		_putchar(num / 10 + '0');
		rem = (num % 10);
		_putchar(rem + '0');
	}
	else if (num < 10)
	{
		_putchar(n + '0');
	}
	else if (num >= 1000)
	{
		_putchar(num / 1000 + '0');
		rem = (num % 1000);
		_putchar(rem / 100 + '0');
		rem = (rem % 100);
		_putchar(rem / 10 + '0');
		rem = (rem % 10);
		_putchar(rem + '0');
	}
	else if (num < 100)
	{
		_putchar(num / 10 + '0');
		rem = (num % 10);
		_putchar(rem + '0');
	}
	else if (num > 100)
	{
		_putchar(num / 100 + '0');
		rem = (num % 100);
		_putchar(rem / 100 + '0');
		_putchar(rem % 10 + '0');
	}
}
