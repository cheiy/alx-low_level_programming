#include "main.h"
/**
 * _strpbrk - Function searches a string for any of a set of bytes.
 * @s: Pointer to the string in which to search.
 * @accept: bytes to search for.
 *
 * Description: Function searches a string for any of a set of bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	int temp;

	index = 1;
	temp = 0;

	while (*s != '\0' && temp == 0)
	{
		if (accept[index] == *s)
		{
			temp = 1;
			break;
		}
		index++;
		s++;
	}
	return (s);
}
