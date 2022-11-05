#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Program prints the n times table, starting with 0
 * @n: Number whose table we are to print.
 *
 * Description: Progam prints the n times table, starting with 0.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				printf(",");
				printf(" ");
				if (i * j <= 9)
				{
					printf("  %d", i * j);
				}
				else if (i * j <= 99)
				{
					printf(" %d", i * j);
				}
				else
				{
					printf("%d", i * j);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
