#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function creates an array of integers
 * @min: smallest integer to include in array
 * @max: largest integer to include in array
 *
 * Description: Function creates an array of integers.
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int range;
	int i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(range * sizeof(range));

	i = 0;
	while (i < range)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
