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

	loop1 = 0;
	loop2 = 0;
	while (loop1 < 24)
	{
		while (loop2 < 60)
		{
			_putchar(loop2);
			loop2++;
		}
		loop2 = 0;
		loop1++;
	}
}
