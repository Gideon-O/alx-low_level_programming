#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int x = '0';

	for (; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
