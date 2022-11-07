#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints the result of the multiplication of 2 numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments.
 *
 * Description: Program prints the result of the multiplication of 2 numbers.
 *
 * Return: 0 if executed successfully, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
