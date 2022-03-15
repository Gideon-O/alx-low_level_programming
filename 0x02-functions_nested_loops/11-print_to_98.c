#include "main.h"

/**
 * print_to_98 - Check main
 * @n: Parameter argument
 * Description: Prints natural numbers to 98
 *
 * Returns: Void
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if ((n / 10) != 0)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
