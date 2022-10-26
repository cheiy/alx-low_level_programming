#include "main.h"
/**
 * _strcpy - Function copies the string pointed by src pointer, including the
 * null byte.
 * @dest: Destination to copy src to
 * @src: Source string
 *
 * Description: Copies the string pointed to by src pointer to the dest buffer
 *
 * Return: Pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int size;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	for (length = 0; length < size; length++)
	{
		dest[length] = src[length];
	}

	return (dest);
}
