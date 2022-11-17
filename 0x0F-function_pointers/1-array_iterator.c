#include "function_pointers.h"
/**
 * array_iterator - Function executes a function given as a parameter
 * on each element of an array.
 * @array: The array to work on.
 * @size: The size of the arry.
 * @action: The action to perform on the element
 *
 * Description: Function exectues a function given as a parameter on
 * each element of an array.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array ==  NULL || size == 0 || action == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
