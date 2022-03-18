#include "main.h"

/**
 * print_triangle - Prints a right inclined triangle
 *
 * @size: Paramenter integer for triangle size
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int x, y, row = 0, sp = size - 1;

	if (size > 0)
	{
		for (; row < size; row++)
		{
			x = sp;
			for (; x > 0; x--)
			{
				_putchar(' ');
			}
			x--;

			for (y = 0; y <= row; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
