#include "main.h"
/**
 * print_number - Function prints an integer using only the _putchar function
 * @n: The integer to print
 *
 * Description: Function prints an integer using only the _putchar function.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
