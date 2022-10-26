#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Description: Reverses a string.
 *
 * Return: 0 always
 */
void rev_string(char *s)
{
	int size;
	char tmp;
	int begin;

	size = 0;
	begin = 0;
	/* Get the size of the array first */
	while (s[size] != '\0')
	{
		size = size + 1;
	}
	/*
	 * Loop through the array while swapping values to
	 * temp char variable.
	 */
	while (begin < size)
	{
		tmp = s[begin];
		s[begin] = s[size];
		s[size] = tmp;
		size--;
		begin++;
	}
}
