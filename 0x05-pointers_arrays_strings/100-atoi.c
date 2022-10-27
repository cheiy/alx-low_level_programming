#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi - This function converts a string to an integer.
 * @s: Pointer to a char type that holds the string to convert.
 *
 * Description: Function converts a string to an integer.
 *
 * Return: an integer value.
 */
int _atoi(char *s)
{
	int len;
	int position;
	int sign;
	int num;

	len = 0;
	position = 0;
	num = 0;
	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}
	/*
	 * Locate where first integer occurs in the string.
	 * Iterate to find other integers following it
	 * Break if what follows is not an integer
	 */
	while (position < len)
	{
		if (isdigit(s[position]))
		{
			if (s[position - 1] == '-')
			{
				sign = -1;
			}
			else
			{
				sign = 1;
			}
			while (isdigit(s[position]))
			{
				num = num * 10 + s[position] - '0';
				position++;
			}
			break;
		}
		position++;
	}
	return (num * sign);
}
