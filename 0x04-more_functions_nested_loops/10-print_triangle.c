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
	int x, y;
	int sp = size - 1;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				n--;
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
