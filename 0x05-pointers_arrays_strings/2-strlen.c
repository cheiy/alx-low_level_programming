#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to string for which we need to find the length
 *
 * Description: Returns the length of a string
 *
 * Return: 0 if successfully executed.
 *
 */
int _strlen(char *s)
{
	int count;
	int size;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	size = count;

	return (size);
}
