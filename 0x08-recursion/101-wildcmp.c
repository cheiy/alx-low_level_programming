#include "main.h"
/**
 * wildcmp - Compares two strings and returns 1 if the strings can be
 * considered identical
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 *
 * Description: Compares two strings & returns 1 if the strings can
 * be considered identical.
 *
 * Return: 1  if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	int flag;

	if (*s1 != '\0')
	{
		if (*s2 == '*')
		{
			flag = 1;
		}
		if (*s1 == *s2)
		{
			flag = 1;
			wildcmp(s1 + 1, s2 + 1);
		}
		else
		{
			flag = 0;
		}
	}
	return (flag);
}
