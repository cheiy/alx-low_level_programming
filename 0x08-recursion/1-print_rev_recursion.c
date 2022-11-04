#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be reversed.
 *
 * Description: Function prints a string in reverse.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		if (*s != '\0')
		{
			_print_rev_recursion(s + 1);
			_putchar(*s);
		}
	}
}
