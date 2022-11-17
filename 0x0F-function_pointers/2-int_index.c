#include "function_pointers.h"
/**
 * int_index - Function seaches for an integer.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: Returns the index of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ret_val;

	i = 0;
	if (array == NULL || cmp == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			ret_val = i;
			break;
		}
		else
			ret_val = -1;
		i++;
	}
	return (ret_val);
}
