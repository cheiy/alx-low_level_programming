#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @size: base of the 'virtual triangle'
 *
 * Description: Prints a diagonal line  when given a size
 * which will be base.
 *
 * Return: nothing
 */
void print_diagonal(int size)
{
	int b;
	int i;
	int base;
	int height;

	height = size;
	base = 0;

	if (size <= 0)
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
