#include "main.h"
/**
 * puts2 - Prints ever other character of a string, starting with
 * the first character, followed by a new line.
 *
 * @str: Pointer to the string
 *
 * Description: Prints very other char of a string staring with the
 * first char.
 *
 * Return: 0 always
 */
void puts2(char *str)
{
	char *tmp;


	tmp = str;


	while (*tmp != '\0')
	{
		_putchar(*tmp);
		tmp = tmp + 2;
	}
	_putchar('\n');
}