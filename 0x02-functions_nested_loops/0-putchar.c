#include "main.h"

int main(void)
{
	int our_chars[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count = 0;

	while (count < 8 )
	{
		_putchar(our_chars[count]);
		count++;
	}

	/*_putchar(our_chars[0]);*/

	return (0);
}
