#include "main.h"
/**
 * _strncat - Function concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: number of bytes to use from src.
 *
 * Description: Function concatenates 2 strings.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	char *ptr;

	dest_len = 0;
	src_len = 0;
	/*
	 * Get the length of dest string
	 */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*
	 * Copy n contents of src to dest
	 */
	while (src_len < n && src[src_len] != '\0')
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	ptr = dest;

	return (ptr);
}
