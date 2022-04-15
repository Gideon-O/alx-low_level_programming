#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings separated by an constant strng
 * @separator: Separating string
 * @n: Number of string elements
 * @...: Strings to be printed
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	for (i; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}