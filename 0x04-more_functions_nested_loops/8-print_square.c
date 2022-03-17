#include "main.h"

/**
 * print_square - Prints a square of size n
 *
 * @size: Parameter of function for square size
 *
 * Return: Void
 */

void print_square(int size)
{
	int y, x = 0;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
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
