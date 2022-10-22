#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: Number of characters to use
 *
 * Description: Prints a diagonal line on the terminal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(92);
		_putchar('\n');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
