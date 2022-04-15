#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all integers passed to them
 * @n: integer value
 *
 * Return: 0 if n == 0 or sum of all arguments if otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);
	for (sum = 0; i != NULL; i = va_arg(args, int))
	{
		sum += i;
	}
	va_end(args);

	return (sum);
}
