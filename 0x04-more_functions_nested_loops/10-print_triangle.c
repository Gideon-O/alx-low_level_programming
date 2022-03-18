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
	int x, y, sp = size - 1;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < sp)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			sp--;
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
