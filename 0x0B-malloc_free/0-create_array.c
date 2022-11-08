#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function creates an array of chars, and initializes it
 * with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Description: Function creates an array of chars, and initializes it with
 * a specific char.
 *
 * Return: Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/*
	 * Try allocating memory
	 */
	arr = (char *) (malloc(sizeof(char) * size));
	if (arr == NULL)
	{
		/*
		 * If it fails, print this message
		 */
		printf("Unable to allocate memory of size %d\n", size);
	}
	else
	{
		/*
		 * Initialize the memory allocated with char c
		 */
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}


