#include "main.h"
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

	if (width == NULL || height == NULL)
	{
		return (NULL);
	}
	else
	{
		rect = (int *)malloc(sizeof(int *) * width);
		if (rect == NULL)
		{
			return (NULL);
		}
		int temp_width = 0;
		int temp_height = 0;

		while (temp_width < width)
		{
			rect[temp_width] = rect[0] + temp_width * height;
			temp_width++;
		}
	}
	return (rect);
}
