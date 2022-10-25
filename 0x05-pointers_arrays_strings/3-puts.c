#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: Point to string to be printed
 *
 * Description: Prints a string followed by a new line in
 * the standard output.
 *
 * Return: 0 if executed successfully.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
