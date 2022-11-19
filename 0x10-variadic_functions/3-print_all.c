#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Function prints anything.
 * @format: List of types of arguments passed to the function.
 * @...: Additional arguments.
 *
 * Description: Function prints anything.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	char separator;

	separator = ',';
	va_arg(arg_ptr, format);
	if (format == i || format == c || format == i || format == s)
	{
		while (i < 8)
		{
			if (format == s && va_arg(arg_ptr, char *) == NULL)
				printf("(nil)");
			switch (format)
			{
			case c:
				printf("%c%s", va_arg(arg_ptr, char), separator);
			case i:
				printf("%d%s", va_arg(arg_ptr, int), separator);
			case f:
				printf("%d%s", va_arg(arg_ptr, float), separator);
			case s:
				printf("%s%s", va_arg(arg_ptr, char *), separator);
			default:
				break;
			}
			i++;
		}
	}
	printf("%\n");
	va_end(arg_ptr);
}
