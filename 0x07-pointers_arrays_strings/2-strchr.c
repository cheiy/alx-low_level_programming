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
	while(*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	
	return (s);
}
