#include "main.h"

/**
 * print_last_digit - Function prints the last digit of a decimal number
 * @num: The number whose last digit we want to calculate
 *
 * Description: - Program prints last digit of a decimal number
 *
 * Return: Returns the last digit of a given number
 */
int print_last_digit(int num)
{
	int last_digit;
	int abs_num;

	if (num < 0)
	{
		abs_num = num * -1;
	}
	else if (num >= 0)
	{
		abs_num = num;
	}

	last_digit = abs_num % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
