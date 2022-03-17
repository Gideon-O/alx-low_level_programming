#include "main.h"

/**
 * more_numbers - Prints multples of numbers
 *
 * Return: Void
 */

void more_numbers(void)
{
	int y, x = 0;

	for (; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar(y / 10 + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
