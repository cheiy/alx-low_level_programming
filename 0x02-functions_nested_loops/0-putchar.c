#include "main.h"
/**
 * main - prints the word _putchar
 *
 * Description: prints the word _putchar using a custom function
 *
 * Return: 0 if it runs successfully
 */

int main(void)
{
	int our_chars[] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
	int count = 0;

	while (count < 9)
	{
		_putchar(our_chars[count]);
		count++;
	}


	return (0);
}
