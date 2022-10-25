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
	int count, length;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	length = 0;
	while (length <= count)
	{
		_putchar(*s--);
		length++;
	}
}

