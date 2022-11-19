#include "variadic_functions.h"
#include <stdio.h>
#include <strings.h>
/**
 * print_strings - Function prints strings.
 * @separator: Separator.
 * @n: Number of strings to print.
 *
 * Description: Function prints strings.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_ptr;

	i = 0;

	va_start(arg_ptr, n);
	while (i < n - 1)
	{
		if (separator == NULL)
			printf("%s", va_arg(arg_ptr, char *));
		else
			printf("%s%s", va_arg(arg_ptr, char *), separator);
		i++;
	}
	printf("%s", va_arg(arg_ptr, char *));
	printf("\n");
	va_end(arg_ptr);
}
