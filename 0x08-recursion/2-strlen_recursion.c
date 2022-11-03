#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function returns the length of a string
 * @s: Pointer to the string.
 *
 * Description: Function returns the length of a string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != 0)
	{
		if (*s != '\0')
		{
			len = 0;
			len++;
			s++;
			len += _strlen_recursion(s);
		}
	}
	else
	{
		len = 0;
	}
	return (len);
}
