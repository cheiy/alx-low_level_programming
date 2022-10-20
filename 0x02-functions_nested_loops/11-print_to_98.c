#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program prints all the natural numbers starting from
 * the given number n up to 98
 * @n: The number from which to start
 *
 * Description: Program prints all the natural numbers starting from
 * the given number n up to 98
 *
 * Return: 0
 *
 */
void print_to_98(int n)
{
	if (n == 98)
	{
	
		printf("%d \n",n);
	}

	else if (n >= 98)
	{
		int loop = n;
		while (loop >= 98)
		{
			
			printf("%d", loop);
			if(loop != 98)
			{
				printf(", "); 
			}

			loop--;	
		}
		printf("\n");
	}
	else
	{
		int loop2 = n;
		while (loop2 <= 98)
		{
			printf("%d", loop2);
			if(loop2 != 98)
			{
				printf(", ");
			}
			loop2++;
		}
		printf("\n");
	}
}

