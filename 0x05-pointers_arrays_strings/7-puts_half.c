#include "main.h"
#include <string.h>

/**
 * puts_half - Prints a string from halfway to the end
 * @str: String input
 * Return: Void
 */

void puts_half(char *str)
{
	int i = strlen(str);
	int y, x = 0;

	if (i % 2 == 0)
	{
		y = i / 2;
	}
	else
	{
		y = (i + 1) / 2;
	}

	for (x = y; x < i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
