#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of arguments
 * Return: sum of parameters, 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	if (n == 0)
		return (0);
	return (sum);
}
