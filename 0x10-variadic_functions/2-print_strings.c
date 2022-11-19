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
	char *string;

	i = 0;
	if (n == 0)
	{
		printf("\n");
		exit(EXIT_FAILURE);
	}
	va_start(arg_ptr, n);
	string = va_arg(arg_ptr, char *);
	while (i < n)
	{
		if (separator == NULL && string == NULL)
			printf("(nil)\n");
		else if (separator == NULL && string != NULL)
			printf("%s", string);
		else if (string == NULL && separator != NULL && i < n - 1)
			printf("(nil)%s", separator);
		else if (string == NULL)
			printf("(nil)");
		else if (string != NULL && i < n - 1)
			printf("%s%s", string, separator);
		else
			printf("%s", string);
		string = va_arg(arg_ptr, char *);
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
