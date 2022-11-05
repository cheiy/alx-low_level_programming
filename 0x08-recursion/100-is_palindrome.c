#include "main.h"

/**
 * is_palindrome - Function finds the length of a string.
 * @s: Pointer to the the string.
 *
 * Description: Function finds the length of a string.
 *
 * Return: Returns length of the string.
 */
int is_palindrome(char *s)
{
	int len;
	int palindrome;
	int len2;
	int flag;

	flag = 0;
	len2 = 0;
	if (*s != 0)
	{
		if (*s != '\0')
		{
			len = 0;
			len++;
			if (*(s + len - 1) == *(s + len2))
			{
				flag += len;
				len--;
				len2++;
			}
			else
			{
				flag = 0;
				len--;
				len2++;
			}
			len += is_palindrome(s + 1);
		}
		if (flag > 0)
		{
			palindrome = 1;
		}
	}
	else
	{
		len = 0;
		palindrome = 1;
	}
	return (palindrome);
}
