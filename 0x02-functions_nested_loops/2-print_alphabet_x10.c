#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabet 10 times
 *
 * Description: function prints the alphabet 10 times
 * in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int times;
	int letters;

	letters = 0;
	times = 0;
	while (times < 10)
	{
		while (letters < 26)
		{
			_putchar(alphabet[letters]);
			letters++;
		}
		_putchar('\n');
		letters = 0;
		times++;
	}
}
