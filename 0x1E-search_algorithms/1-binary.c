#include "search_algos.h"
/**
 * binary_search - Function searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Description: Function searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * Return: Index where value is located, -1 if value is not present or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	
