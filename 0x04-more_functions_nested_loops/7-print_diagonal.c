#include "main.h"

/**
 * print_diagonal - Prints diagonal line with \"\"
 *
 * @n: Parameter integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			y = 0;

			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
