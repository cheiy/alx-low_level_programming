#include "main.h"
/**
 * print_numbers - Prints numbers 0 to 9 followed by a new line
 * Uses _putchar function only.
 *
 * Description: Prints numbers 0 to 9 followed by a new line.
 *
 * Return: 0 if successful
 *
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
