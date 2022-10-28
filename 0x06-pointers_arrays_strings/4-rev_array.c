#include "main.h"
/**
 * reverse_array - Function reverses the content of an array of integers
 * @a: Pointer to the array to reverse.
 * @n: Number of elements in the array.
 *
 * Description: Function reverses the content of a given array of integers.
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int len;
	/*int temp2;*/

	len = 0;
	n--;
	while (len < n)
	{
		/*
		 * copy a[len] to temp
		 */
		temp = a[len];
		/*
		 * move value at a[n] to a[len];
		 */
		a[len] = a[n];
		/*
		 * copy temp (the value initially in a[len]) to a[n];
		 */
		a[n] = temp;

		len++;
		n--;
	}

}

