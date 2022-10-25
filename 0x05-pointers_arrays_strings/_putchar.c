#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom function to print _putchar
 * @ch: Input argument
 *
 * Description: Custom function to print _putchar
 *
 * Return: Returns 1 on success and -1 otherwise
 */

int _putchar(char ch)
{
	
	return (write(1, &ch, 1));
	
}
