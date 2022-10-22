#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: base of the 'virtual triangle'
 *
 * Description: Prints a diagonal line  when given a size
 * which will be base.
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int b;
	int i;
	int base;
	int height;

	height = n;
	base = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = height; i > 0; i--)
		{
			base++;
			for (b = 0; b < base ; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
