#include "main.h"
/**
 * string_toupper - Function changes all lowercase letters of a string
 * to uppercase.
 * @str: Pointer to string containing lowercase characters.
 *
 * Description: Function changes all lowercase letters of given string
 * to uppercase.
 *
 * Return: Pointer to the string
 */
char *string_toupper(char *str)
{
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		while (count < 26)
		{
			if (str[len] == lower[count])
			{
				str[len] = upper[count];
				break;
			}
			count++;
		}
		count = 0;
		len++;
	}
	return (str);
}
