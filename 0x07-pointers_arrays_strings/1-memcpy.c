#include "main.h"
/**
 * _memcpy - Function copies a memory area.
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: The number of bytes to copy.
 *
 * Description: Function copies n bytes from memory area src to
 * memory area dest
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		n--;
		src++;
		dest++;
	}

	return (dest);
}
