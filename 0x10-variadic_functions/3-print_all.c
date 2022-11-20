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
	char ch, opt, *separator, *str;
	int len;
	float fl;

	len = 0;
	separator = ",";
	va_start(arg_ptr, format);
	while (format[len])
	{
		opt = format[len];
		switch (opt)
		{
			case 'c':
				ch = va_arg(arg_ptr, int);
				printf("%c", ch);
				break;
			case 'i':
				printf("%d", va_arg(arg_ptr, int));
				break;
			case 'f':
				fl = va_arg(arg_ptr, double);
				printf("%f", fl);
				break;
			case 's':
				str = va_arg(arg_ptr, char *);
				printf("%s", str);
			default:
				break;
		}
		if (len < 3 && (opt == 'c' || opt == 'i' || opt == 'f' || opt == 's'))
			printf("%s ", separator);
		len++;
	}
	printf("\n");
	va_end(arg_ptr);
}
