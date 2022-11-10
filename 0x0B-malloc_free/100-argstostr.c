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
	unsigned int i;
	int j;

	args_concat = (char *)malloc(sizeof(char *) * ac);

	if (args_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		i = 0;
		while (j < ac)
		{
			while (av[j][i])
			{
				printf("%c", av[j][i]);
				*args_concat = av[j][i];
				i++;
			}
			i = 0;
			j++;
			printf("\n");
		}
	}
	return (args_concat);
}
