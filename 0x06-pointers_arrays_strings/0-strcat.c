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
	int len_dest;
	int len_src;

	len_dest = 0;
	len_src = 0;

	/*
	 * First, find the length of the dest string
	 */
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	/*
	 * Copy the contents of the src string to the dest string
	 */
	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}

	ptr = dest;
	return (ptr);
}
