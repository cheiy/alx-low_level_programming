#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the Fizz-Buzz
 *
 * Description: Fizz-Buzz test
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("%s", "Buzz");
			}
			else
			{
				printf("%s ", "Buzz");
			}

		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
