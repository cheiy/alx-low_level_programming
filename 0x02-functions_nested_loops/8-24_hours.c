#include "main.h"
/**
 * jack_bauer - prints every minute of the day in 24
 *
 * Description: prints every minute of the day in 24
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int loop1;
	int loop2;

	loop1 = 48;
	loop2 = 48;
	while (loop1 < 50)
	{
		while (loop2 < 51)
		{
			while (loop3 < 53)
			{
				while (loop4 < 57)
				{
					_putchar(loop1);
					_putchar(loop2);
					_putchar(loop3);
					_putchar(loop4);
					loop4++;
				}
				loop4 = 48;
				loop3++;
			}
			loop4 = 48;
			loop4 = 48;
			loop2++;
			_putchar(58);
		}
		loop4 = 48;
		loop3 = 48;
		loop2 = 48;
		loop1++;
	}

}
