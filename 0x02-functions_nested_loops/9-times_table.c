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
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{	
			_putchar(',');
			_putchar(' ');
			t = i * j;
			if (t <= 9)
			{
				_putchar(' ');
			}
			else
			{
			i	_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
			
		}
		_putchar('\n');
	}
}

