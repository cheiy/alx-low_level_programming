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
	char *temp;
	int count;
	int count_to_half;
	int half_of_string;

	temp = str;
	count = 0;
	count_to_half = 0;
	while (*temp != '\0')
	{
		temp++;
		count++;
	}

	half_of_string = count / 2;

	while (*str != '\0')
	{
		if (count_to_half < half_of_string)
		{
			_putchar(*str);
			count_to_half++;
		}
		str--;
	}
}
