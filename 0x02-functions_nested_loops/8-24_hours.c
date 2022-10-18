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
	int loop3;
	int loop4;

	loop1 = 0;
	loop2 = 0;
	loop3 = 0;
	loop4 = 0;
	while (loop1 < 3)
	{
		while (loop2 < 4)
		{
			while (loop3 < 6)
			{
				while (loop4 < 9)
				{
					_putchar(loop1);
					_putchar(loop2);
					_putchar(loop3);
					_putchar(loop4);
					loop4++;
				}
				loop4 = 0;
				loop3++;
			}
			loop4 = 0;
			loop3 = 0;
			loop2++;
			_putchar(58);
		}
		loop4 = 0;
		loop3 = 0;
		loop2 = 0;
		loop1++;
	}

}
