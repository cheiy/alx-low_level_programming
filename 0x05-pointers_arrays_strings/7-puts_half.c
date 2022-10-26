#include "main.h"
/**
 * puts_half - Function prints half of a string followed by a new line.
 * @str: Pointer to string
 * Description: Prints half of a string.
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int count;
	int half_of_string;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		half_of_string = count / 2;
		while (str[half_of_string] != '\0')
		{
			_putchar(str[half_of_string]);
			half_of_string++;
		}
	}
	else
	{
		half_of_string = (count - 1) / 2;
		half_of_string++;
		while (str[half_of_string] != '\0')
		{
			_putchar(str[half_of_string]);
			half_of_string++;
		}
	}
	_putchar('\n');
}
