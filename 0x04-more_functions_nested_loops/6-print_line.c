#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: number of characters to be printed.
 *
 * Description: Draws a straight line in the terminal
 *
 * Return: nothing
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
