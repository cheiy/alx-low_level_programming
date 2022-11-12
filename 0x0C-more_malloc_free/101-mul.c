#include "main.h"
#include <stdio.h>
/**
 * main - Program multiplies two positive numbers
 * @argc: Number of arguments passed to our program.
 * @argv: Array of pointers to our arguments.
 *
 * Description: Program multiples two positive numbers in base 10
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	unsigned long long result;
	unsigned long long num1;
	unsigned long long num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);

	result = num1 * num2;

	printf("%llu\n", result);

	return (0);
}
