#include "main.h"
/**
 * print_diagsums - Function prints the sum of the 2 diagonals of
 * a square matrix of integers.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix
 *
 * Description: Function prints the sum of the 2 diagonals of a
 * square matrix of integers.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int diag1;
	int diag2;
	int n;
	int sum;
	int sum2;
	int interval1;
	int interval2;

	if (size > 0)
	{
		sum = 0;
		interval1 = size - 1;
		n = size  - 1;
		while (n <= (size * size) - size)
		{
			diag2 = a[n];
			sum += diag2;
			n = n + interval1;
		}
		sum2 = 0;
		interval2 = size + 1;
		n = 0;
		while (n <= (size * size))
		{
			diag1 = a[n];
			sum2 += diag1;
			n = n + interval2;
		}
		printf("%d, %d\n", sum2, sum);
	}
}
