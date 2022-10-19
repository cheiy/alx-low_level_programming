#include  "main.h"

/**
 * jack_bauer - Prints 24 hr themed time
 *
 * Description: PRints 24 hour themed time
 *
 * Return: void
 */


void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;
	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
