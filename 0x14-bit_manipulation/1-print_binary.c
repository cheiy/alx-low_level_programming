#include "main.h"
#include <stdio.h>
/**
 * print_binary - Function prints the binary representation of a number.
 * @n: The number to represent in binary.
 *
 * Description: Function prints the binary representation of a number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	/*unsigned long int i;*/

	while (n)
	{
		n = n & 1;
		printf("%ld", n);
		n = n >> 1;
	}
}
