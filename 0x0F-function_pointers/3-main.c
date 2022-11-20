#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Our main Program
 * @argc: Number of arguments entered in our main program.
 * @argv: Array of pointers to the arguments entered.
 *
 * Description: Our main program.
 * Return: 0 if successfully executed.
 */
int main(int argc, char *argv[])
{
	/*
	 * char *ch;
	 */
	int a, b;
	char *op;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (*op != 43 && *op != 45 && *op != 42 && *op != 47 && *op != 37)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*get_op_func(op))(a, b));
	return (0);
}
