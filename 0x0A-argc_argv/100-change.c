#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: Number of arguments to our program
 * @argv: Array of pointers to the arguments.
 *
 * Description: Program prints the min number of coins to make
 * change for an amount of money.
 *
 * Return: 0 if successful, 1 otherwise.
 */
int calc_change(int a);

int main(int argc, char **argv)
{
	int change;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		calc_change(change);
	}
	return (0);
}
int calc_change(int change)
{
	int coins;
	int rem;
	if (change >= 25)
	{
		coins = change / 25;
		rem = change % 25;
		if (!rem)
		{
			coins = coins;
			printf("%d\n", coins); 
		}
		else
		{	
			change = rem;
			coins += calc_change(change);
		}
	}
	if (change >= 10)
	{
		coins = change / 10;
		rem = change % 10;
		if (!rem)
		{
			coins = coins;
			printf("%d\n", coins);
		}
		else
		{
			coins += calc_change(rem);
		}
	}
	if (change >= 5)
	{
		coins = change / 5;
		rem = change %  5;
		if (!rem)
		{
			coins = coins;
			printf("%d\n", coins);
		}
		else
		{
			coins += calc_change(rem);
		}
	}
	if (change >= 2)
	{
		coins = change / 2;
		rem = change % 2;
		if (!rem)
		{
			coins = coins;
			printf("%d\n", coins);
		}
		else
		{
		 	coins += calc_change(rem);
		}
	}
	if (change == 1)
	{
		coins = change / 1;
		rem = change % 1;
	       	coins += calc_change(rem);	
		printf("%d\n", coins);
	}
	return (coins);
}
