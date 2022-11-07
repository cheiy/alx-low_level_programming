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
	int i;
	int sum;
	int flag;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (atoi(argv[i]) > 0)
			{
				sum = 0;
				flag = 0;
				sum += atoi(argv[i]);
			}
			else
			{
				flag = 1;
				printf("Error\n");
				return (flag);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (flag);
}
