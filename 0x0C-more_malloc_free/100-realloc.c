#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Function reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Description: Function reallocates a memory block using malloc and free.
 *
 * Return: Pointer to the reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;

	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/*
	*	if (ptr == NULL)
	*	{
	*		ptr2 = malloc(new_size);
	*		if (ptr2 == NULL)
	*			return (NULL);
	*	}
	*/
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr2);
}
