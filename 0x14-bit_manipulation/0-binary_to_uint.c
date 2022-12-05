#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Function converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Description: Function converts a binary number to an unsigned int.
 *
 * Return: Returns the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num, conv;
	static unsigned int len, i, base;
	unsigned int digit;

	len = 0;
	digit = 0;
	conv = 0;
	i = 0;
	base = 2;
	while (b[len] != '\0')
		len++;

	converted_num = 0;
	while (i < len)
	{
		if (b[len - 1] != 48 && b[len - 1] != 49)
		{
			converted_num = 0;
			return (converted_num);
		}
		else
		{
			digit = (((int) b[len - 1]) - '0');
			conv = (digit * _pow(base, len - 1));
			converted_num += conv;
		}
		i++;
	}
	return (converted_num);
}
/**
 * _pow - Function calculates the power of an integer.
 * @b: The base of the numbers.
 * @p: The power to raise the number to.
 *
 * Description: Function calculates the power of a given integer.
 *
 * Return: The power of the number.
 */
unsigned int _pow(unsigned int b, unsigned int p)
{
	unsigned int power;

	if (p == 0)
		power = 1;
	else
	{
		while (p != 0)
		{
			power *= b;
			--p;
		}
	}
	return (power);
}
