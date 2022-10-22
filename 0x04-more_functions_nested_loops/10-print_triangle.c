#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: base of triangle
 *
 * Description: Prints a triangle when given a size
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int b;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			_putchar(' ');
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
