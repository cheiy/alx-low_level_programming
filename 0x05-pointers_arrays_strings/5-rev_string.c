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
	int count1, count2;
	char *str2;

	str2 = s;
	count1 = 0;
	count2 = 0;

	while (s[count1] != '\0')
	{
		count1++;
	}
	while (count1 >= 0)
	{
		str2[count1--] == s[count2++];
		count1--;
	}
}


