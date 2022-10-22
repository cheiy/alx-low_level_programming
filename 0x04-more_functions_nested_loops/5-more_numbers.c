#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 ten times followed by a new line
 * each time.
 *
 * Description: Prints numbers 0 to 14 ten times followed by a new line each
 * time.
 *
 * Return: 0 if execution is successful.
 *
 */
void more_numbers(void)
{
	int j = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
