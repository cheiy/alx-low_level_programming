#include "main.h"
/**
 * _memset - Function fills memory with a constant byte
 * @s: Pointer to the memory area to be filled.
 * @b: constant byte to fill the memory area.
 * @n: the number of bytes of memory to be filled.
 *
 * Description - Fills the memory pointed to by pointer s, with the constant
 * byte b.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s++ = b;
		n--;
	}

	return (s);
}
