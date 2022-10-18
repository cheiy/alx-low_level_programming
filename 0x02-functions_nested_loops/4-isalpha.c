#include "main.h"
/**
 * _isalpha - checks whether character is alphanumeric
 * @c: character we are checking
 *
 * Description: function checks whether character
 * entered is a letter or digit
 *
 * Return: 0 if alphanumeric, 1 otherwise.
 *
 */
int _isalpha(char c)
{
	if ((unsigned char)(c) >= 48)
	{
		if ((unsigned char)(c) <= 57)
		{
			return (1);
		}
	}
	else if ((unsigned char)(c) >= 65)
	{
		if ((unsigned char)(c) <= 90)
		{
			return (1);
		}
	}
	else if ((unsigned char)(c) >= 97)
	{
		if ((unsigned char)(c) <= 122)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
