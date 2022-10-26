#include "main.h"
/**
 * print_rev - Function prints a string, in reverse, followed
 * by a new line.
 * @s: Pointer to string that we want to print
 *
 * Description: Function prints a string, in reverse, followed
 * by a new line.
 *
 * Return: 0 if it executes successfully.
 */
void print_rev(char *s)
{
	/*
	 * Find the length of string first
	 * Then run while loop in reverse
	 */
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}

