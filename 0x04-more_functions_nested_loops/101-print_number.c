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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	if (n != 0)
	{
		_putchar(n % 10 + '0');
	}
}
