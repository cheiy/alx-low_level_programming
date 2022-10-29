#include "main.h"
#include <limits.h>
/**
 * infinite_add - Function adds two numbers.
 * @n1: Pointer to first number.
 * @n2: Pointer to second number.
 * @r: Buffer to store the result in.
 * @size_r: Size of the buffer r.
 *
 * Description: Function adds two numbers and returns a pointer
 * to the result.
 *
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum;
	int num1;
	int num2;

	num1 = (int)*(n1);
	num2 = (int)*(n2);

	if ((num1 + num2) > INT_MAX)
	{
		sum = 0;
	}
	else
		sum = num1 + num2;

	if (sum > size_r)
	{
		r = 0;
	}
	else
	{
		r = 0;
	}

	return (r);
}
