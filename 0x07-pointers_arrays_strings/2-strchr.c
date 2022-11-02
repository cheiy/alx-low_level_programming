#include "main.h"
/**
 * _strchr - Function locates a character in a string.
 * @s: The string to search in.
 * @c: The character to search for.
 *
 * Description: Function locates a characte in a string.
 *
 * Return: Pointer to the first occurrence of the characer.
 */
char *_strchr(char *s, char c)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			break;
		}
		count++;
	}
	return (s);
}
