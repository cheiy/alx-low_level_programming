#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function returns a pointer to a newly allocated space in memory.
 * @str: The string to duplicate to the newly allocated space.
 *
 * Description: Function returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * Return: NULL  if str = NULL, Pointer to str otherwise.
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		string = (char *) (malloc(len));
		if (string == NULL)
		{
			return (NULL);
		}
		else
		{
			len = 0;
			while (str[len] != '\0')
			{
				string[len] = str[len];
				len++;
			}
		}
	}
	return (string);
}

