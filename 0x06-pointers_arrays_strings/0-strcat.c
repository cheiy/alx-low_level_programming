#include "main.h"
/**
 * _strcat - Functions appends the src string to the dest string, overwriting
 * the terminating \0 (null byte).
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Description: Function appends the src string to the dest string.
 *
 * Return: Returns a pointer to the resulting string "dest".
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	/*
	 * int len;
	int count;

	len = 0;
	count = 0;
	*/

	/*
	 * First, find the length of the dest string
	 */
	while (*dest != '\0')
	{
		dest++;
	}
	/*
	 * Copy the contents of the src string to the dest string
	 */
	while (*src != '\0')
	{
		dest = src;
		dest++;
		src++;
	}
	ptr = dest;
	return (ptr);
}
