#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the sum of the even-valued Fibonacci numbers
 * Description: Prints the sum of the even-valued Fibonacci numbers
 * whose values do not exceeed 4,000,000.
 * Return: 0 if successful, 1 otherwise.
 */
int main(void)
{
	unsigned long int prev_2;
	unsigned long int prev_1;
	unsigned long int fib;
	unsigned long int sum;
	int i;

	sum = 0;
	prev_2 = 0;
	prev_1 = 1;
	for (i = 0; i < 50; i++)
	{
		fib = prev_1 + prev_2;
		if (fib % 2 == 0 && fib  <= 4000000)
		{
			sum += fib;
		}
		prev_2 = prev_1;
		prev_1 = fib;
	}
	printf("%lu", sum);
	printf("\n");

	return (0);
}
