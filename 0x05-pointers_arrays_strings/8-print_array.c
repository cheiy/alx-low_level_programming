#include "main.h"
#include <stdio.h>
/**
 * print_array - Function prints n elements of an array of integers.
 * followed by a new line.
 * @a: - Pointer to array
 * @n: - Number of items to print out.
 *
 * Description: Function prints n elements of an array of integers followed by
 * a new line.
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		if (count == n - 1)
		{
			printf("%d", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
		count++;
	}
	printf("\n");
}
