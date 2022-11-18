#include "variadic_functions.h"
/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: The first mandatory parameter.
 * @...: The other optional parameters.
 *
 * Description: Function returns the sum of all its parameters
 *
 * Return: Sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
