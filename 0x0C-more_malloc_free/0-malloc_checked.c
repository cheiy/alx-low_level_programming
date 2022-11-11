#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Funtion allocates memory using malloc.
 * @b: Size of memory to allocate
 * Description: Function allocates memory using malloc.
 *
 * Return: Returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b == 0)
	{
		exit (1);
	}
	else
	{
		mem = malloc(b);
		if (mem == NULL)
			exit (98);
	}
	return (mem);
}
