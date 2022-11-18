#include "3-calc.h"
#include <stdio.h>

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
	int (*add_ptr)(int, int);
	int result;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	add_ptr = op_add;
	result = add_ptr(a, b);

	if (argc < 4)
		return (0);
	printf("%d\n", result);

	return (0);
}
