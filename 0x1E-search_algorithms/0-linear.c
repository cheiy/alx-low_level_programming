#include "search_algos.h"
/**
 * linear_search - Function searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: The array in which to search.
 * @size: The size of the array.
 * @value: The value to search for.
 * Description: Function searches for a value in an array of integers using
 * the Linear search algorithm.
 * Return: The first index where value is stored, or -1 if value is absent.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int result;

	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = i;
			break;
		}
		else if (i >= size)
		{
			result = -1;
			break;
		}
	}
	return (result);
}
