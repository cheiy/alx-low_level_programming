#include "main.h"
/**
 * times_table - prints the 9 times table, staring with 0
 *
 * Description: Prints the 9 times table
 *
 * Return: 0 if successful
 */

void times_table(void)
{
	int i;
	int j;
	int t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			_putchar(',');
			_putchar(' ');
			if (t <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}

