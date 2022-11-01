#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * Description: Prints the first 98 Fibonacci numbers starting with
 * 1 and 2.
 * Return: 0 if successful, 1 otherwise.
 */
int main(void)
{
	unsigned  long int prev_2;
	unsigned long int prev_1;
	unsigned long int fib;
	int i;

	prev_2 = 0;
	prev_1 = 1;
	for (i = 0; i <= 98; i++)
	{
		fib = prev_1 + prev_2;
		if (i < 98)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		prev_2 = prev_1;
		prev_1 = fib;
	}
	printf("\n");

	return (0);
}
