#include "main.h"

/**
 * _isdigit - Checks if character is a digit (0 through 9)
 * @c: Character to be checked.
 *
 * Description: Function checks if character is a digit.
 *
 * Return: 1  if c is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
