#include "main.h"

/**
 * print_line - Prints underscores n times
 *
 * @n: Parameter integer
 *
 * Return: Void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
