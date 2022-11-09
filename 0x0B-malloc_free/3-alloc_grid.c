#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of integers
 * @width: The number of rows of the array.
 * @height: The number of columns of the array.
 *
 * Description: Function returns a pointer to a 2 dimensional array of integers
 *
 * Return: A pointer to a 2 dimensional array of integers, NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **rect;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	else
	{
		rect = (int **) malloc(sizeof(int *) * width);
		rect[0] = (int *) malloc(width * height * sizeof(int));
		if (rect == NULL || rect[0] == NULL)
		{
			free(rect);
			free(rect[0]);
			return (NULL);
		}
		i = 1;
		while (i < width)
		{
			rect[i] = rect[0] + i * height;
			i++;
		}
	}
	return (rect);
}
