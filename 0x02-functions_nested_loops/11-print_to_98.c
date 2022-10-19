#include "main.h"

/**
 * print_to_98 - Program prints all the natural numbers from n to 98.
 * @n: Our starting point number.
 *
 * Description: Program prints all the natural numberss from n to 98.
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n < 98)
		{
			_putchar('n' + '0');
			_putchar(',');
			n++;
		}
	}
	else if (n > 0)
	{
		while (n > 98)
		{
			_putchar('n' + '0');
			_putchar(',');
			n--;
		}
	}
	else
	{
		_putchar('n' + '0');
	}

}
