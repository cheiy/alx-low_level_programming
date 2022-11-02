#include "main.h"
/**
 * _strstr - Function locates a substring.
 * @haystack: The string to search in.
 * @needle: The string to search for.
 *
 * Description: Function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes are not compared.
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int count_s;
	int count_h;

	count_s = 0;
	count_h = 0;
	while (needle[count_h] != '\0')
	{
		count_h++;
	}
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack != *needle)
			{
				count_s++;
				break;
			}
			needle++;
			count_s++;
		}
		if (count_s != count_h)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
		count_s++;
	}
	return (NULL);
}
