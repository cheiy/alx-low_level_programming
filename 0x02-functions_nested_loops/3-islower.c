#include "main.h"
/**
 * _islower - checks whether a letter is in lowercase
 * @c : character that we are checking
 *
 * Description: Checks whether a letter is in lowercase or not
 *
 * Return: Returns 1 if lowercase and 0 otherwise
 */
int _islower(char c)
{
	if ((unsigned char)(c) >= 97)
	{
		if ((unsigned char)(c) <= 122)
		{
			return (1);
		}
		else
			return (0);
	}
	else
	{
		return (0);
	}
}
