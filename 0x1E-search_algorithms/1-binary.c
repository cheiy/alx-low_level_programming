#include "search_algos.h"
/**
 * binary_search - Function searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Ponter to the first element of the array we are to search in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Function searches for a value in a sorted array of integers
 * using the Binary Search Algorithm
 * Return: Index where @value is found or NULL if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_item, first_item, last_item, i;

	first_item = 0;
	last_item = size - 1;
	i = 0;
	if (array == NULL)
		return (-1);
	while (first_item <= last_item)
	{
		printf("Searching in array: ");
		for (i = first_item; i < last_item; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[last_item]);
		mid_item = (first_item + last_item) / 2;
		if (value > array[mid_item])
			first_item = mid_item + 1;
		else if (value < array[mid_item])
			last_item = mid_item - 1;
		else
			return (mid_item);
	}
	return (-1);
}
