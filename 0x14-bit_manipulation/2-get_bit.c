#include "main.h"
/**
 * get_bit - Function returns the value of a bit at a given index.
 * @n: Num
 * @index: The index starting from 0 of the bit you want to get
 *
 * Description: Function returns the value of a bit at a given index
 *
 * Return: The value of the bit at index index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	while (index)
	{
		bit = index;
		index--;
	}
	return (index);
}
