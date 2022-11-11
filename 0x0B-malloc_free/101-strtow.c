#include "main.h"
#include <stdlib.h>
/**
 * strtow - Function returns a pointer to an array of strings (words).
 * @str: The string to split
 *
 * Description: Function returns a pointer to an array of strings
 *
 * Return: Pointer to an array of strings.
 */
char **strtow(char *str)
{
	char **strs;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (str == NULL || str == 0)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * len);
	if (strs == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str != 32)
		{
			*strs = str;
		}
		str++;
	}

	return (strs);
}
