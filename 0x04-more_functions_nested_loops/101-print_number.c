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
	int num;

	num = n;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
