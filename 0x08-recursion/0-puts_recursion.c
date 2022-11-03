#include "main.h"
/**
  * _puts_recursion - Function prints a string, followed by a new line
  * @s: Pointer to the string
  *
  * Description: Function prints a string, followed by a new line.
  *
  * Return: Nothing.
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
