#include "main.h"
/**
 * _strncpy - Function copies a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Number of bytes to copy from the src
 *
 * Description - Function copies a string. Works exactly
 * like strncpy
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	/*
	 * While the length of src is less than n and we are not
	 * at the end of the src string, copy src string to dest
	 */
	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	/*
	 * If the length of src is still less than n,
	 * fill the rest of the buffer with null bytes.
	 */
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
