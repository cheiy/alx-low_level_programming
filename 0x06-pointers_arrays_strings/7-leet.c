#include "main.h"
/**
 * leet - Function encodes a string into 1337.
 * @str: Pointer to the string you want to encode.
 *
 * Description: Function encodes a string into 1337.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char *cases = "AEOTLaeotl";
	char *leet = "4307143071";
	int count;
	int len;

	count = 0;
	len = 0;
	while (str[len] != '\0')
	{
		while (count < 10)
		{
			if (str[len] == cases[count])
			{
				str[len] = leet[count];
				break;
			}
			count++;
		}
		count = 0;
		len++;
	}
	return (str);
}
