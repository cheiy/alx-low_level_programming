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
	int hours_1[] = {48, 49, 50};
	int hours_2[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int minutes_1[] = {48, 49, 50, 51, 52, 53};
	int minutes_2[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};


	loop1 = 0;
	loop2 = 0;
	loop3 = 0;
	loop4 = 0;
	while (loop1 < 3)
	{
		while (loop2 < 9)
		{
			while (loop3 < 6)
			{
				while (loop4 < 9)
				{
					_putchar(hours_1[loop1]);
					_putchar(hours_2[loop2]);
					_putchar(58);
					_putchar(minutes_1[loop3]);
					_putchar(minutes_2[loop4]);
					loop4++;
				}
				loop4 = 0;
				loop3++;
			}
			loop4 = 0;
			loop3 = 0;
			loop2++;
		}
		loop4 = 0;
		loop3 = 0;
		loop2 = 0;
		loop1++;
	}

}
