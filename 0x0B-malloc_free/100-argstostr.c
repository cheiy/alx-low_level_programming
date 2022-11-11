#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Function concatenates all the arguments of my program.
 * @ac: Number of arguments.
 * @av: The arguments.
 *
 * Description: Function concatenates all the arguments of my program.
 *
 * Return: Pointer to a new string, NULL  if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *args_concat;
	int i, j, size, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	j = i = len = 0;
	while (j < ac)
	{
		while (av[j][i])
		{
			len++;
			i++;
		}
		j++;
	}
	len += ac;
	args_concat = (char *)malloc(sizeof(char) * len + 1);
	if (args_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		i = 0;
		size = 0;
		while (j < ac)
		{
			while (av[j][i])
			{
				args_concat[size] = av[j][i];
				size++;
				i++;
			}
			j++;
		}
	}
	return (args_concat);
}
