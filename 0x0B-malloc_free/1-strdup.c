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
	unsigned int size;

	size = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[size])
		{
			size++;
		}
		size = size + 1;
		string = (char *) (malloc(sizeof(char) * size));
		if (string == NULL)
		{
			return (NULL);
		}
		else
		{
			size = 0;
			while (str[size] != '\0')
			{
				string[size] = str[size];
				size++;
			}
		}
	}
	return (string);
}

