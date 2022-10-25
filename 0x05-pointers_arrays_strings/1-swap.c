#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to integer 1
 * @b: Pointer to integer 2
 *
 * Description: Function swaps the values of two integers.
 *
 * Return: 0 always.
 */
void swap_int(int *a, int *b)
{
	int val1, val2;

	val1 = *a; /*Assign value inside of address pointed to by a to val1;*/
	val2 = *b; /*Assign value inside of address pointed to by b to val2;*/

	*b = val1;
	*a = val2;
}
