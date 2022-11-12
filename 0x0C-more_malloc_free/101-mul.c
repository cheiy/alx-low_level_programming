#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void print(




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
	unsigned int result;
	unsigned int num1;
	unsigned int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
