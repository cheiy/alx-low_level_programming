#include "main.h"
/**
 * _isupper - Function checks for uppercase character.
 * @c: The character that we are testing.
 * Description: Function checks for uppercase character
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	int upper;

	if (c >= 65 && c <= 90)
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}
	return (upper);
}






