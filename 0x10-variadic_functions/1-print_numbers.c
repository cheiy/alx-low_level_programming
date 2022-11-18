#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Function prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of numbers to print.
 * @...: The option arguments to the function.
 *
 * Description: Function prints numbers, followed by a new line.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_pointer;
	unsigned int i;

	if (n == 0)
		exit(EXIT_SUCCESS);
	i = 0;
	va_start(arg_pointer, n);
	while (i < n - 1)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(arg_pointer, int), separator);
		else
			printf("%d", va_arg(arg_pointer, int));
		i++;
	}
	printf("%d", va_arg(arg_pointer, int));
	printf("\n");
	va_end(arg_pointer);
}
