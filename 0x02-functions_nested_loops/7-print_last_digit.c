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

	last_digit = _abs(num) % 10;

	return (last_digit);
}
