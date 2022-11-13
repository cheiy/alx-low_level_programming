#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Description: Program adds positive numbers.
 *
 * Return: 0 if executed successfully, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int i, j, sum, flag;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = flag = j = 0;
		i = 1;
		while (i < argc)
		{
			while (argv[i][j])
			{
				if (isdigit(argv[i][j]))
					flag = 0;
				else
				{
					flag = 1;
					break;
				}
				j++;
			}
			if (flag == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
			j = 0;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
