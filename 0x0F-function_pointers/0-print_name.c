#include "function_pointers.h"
/**
 * print_name - Function prints a name
 * @name: Name fed in, that we should print.
 * @f: Pointer to the function that prints out chars
 *
 * Description: Function prints a name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
