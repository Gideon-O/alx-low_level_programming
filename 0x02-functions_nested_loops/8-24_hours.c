#include "main.h"

/**
 * jack_bauer - Check holberton
 *
 * Return: Always void
 */

void jack_bauer(void)
{
	int hr2 = 0, hr1;
	int mn, sc;

	while (hr2 < 3)
	{
		hr1 = 0;

		while (hr1 < 4)
		{
			for (mn = 0; mn < 6; mn++)
			{
				for (sc = 0; sc <= 9; sc++)
				{
					_putchar(sc);
				}

				_putchar(mn);
			}
			_putchar(':');
			_putchar(hr1);
			hr1++;
		}
		_putchar(hr2);
		hr2++;
	}
}
