#include <stdio.h>
#include <stdlib.h>
/**
 * calc_change - Recursive function to calculate coins needed per
 * coin value.
 * @a: Amount of change.
 * Description: Recursive function to calculate coins needed per
 * coin value.
 *
 * Return: Number of coins
 */
int calc_change(int a);

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
		printf("%d\n", calc_change(change));
	}
	return (0);
}
/**
 * calc_change - Recursive function to calculate coins needed per
 * coin value.
 * @change: Amount of change.
 *
 * Description: Recursive function to calculate coins needed per
 * coin value.
 * Return: Number of coins
 */
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
		}
		else
		{
			change = rem;
			coins += calc_change(change);
		}
	}
	else if (change >= 10)
	{
		coins = change / 10;
		rem = change % 10;
		if (!rem)
		{
			coins = coins;
		}
		else
		{
			change = rem;
			coins += calc_change(change);
		}
	}
	else if (change >= 5)
	{
		coins = change / 5;
		rem = change %  5;
		if (!rem)
		{
			coins = coins;
		}
		else
		{
			change = rem;
			coins += calc_change(change);
		}
	}
	else if (change >= 2)
	{
		coins = change / 2;
		rem = change % 2;
		if (!rem)
		{
			coins = coins;
		}
		else
		{
			change = rem;
			coins += calc_change(change);
		}
	}
	else
	{
		coins = change / 1;
	}
	return (coins);
}
