#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	unsigned char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	for (count = 0; count < 27; count++)
	{
		_putchar(alpha[count]);
	}
	_putchar('\n');
}

