#include "main.h"
/**
 * _strspn - Function gets the length of a prefix substring.
 * @s: The string to get the prefix substring from
 * @accept: The substring
 *
 * Description: Function gets the length of a prefix substring.
 * Return: Number of bytes in the initial segment of s which consist
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	len = 0;
	while (s[count1] != '\0')
	{
		if (s[count1] != ' ')
		{
			while (accept[count2] != '\0')
			{
				if (s[count1] == accept[count2])
				{
					len++;
				}
				count2++;
			}
		}
		else
		{
			return (len);
		}
		count2 = 0;
		count1++;
	}
	return (len);
}
