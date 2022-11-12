#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Function allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size in bytes of each element
 *
 * Description: Function allocates memory for an array, using
 * malloc. Memory is set to zero.
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);
	return (arr);
}
