#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers separated by a string
 * @separator: string to print between numbers
 * @n: numbers of integers passed to function
 *
 * Return: VOid
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list num;

	va_start(num, n);
	for (; x < n; x++)
	{
		printf("%s", separator);
		printf("%d", va_arg(num, int));
	}
	printf("\n");
}
