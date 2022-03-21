#include "main.h"
#include <string.h>

/**
 * puts2 - Prints each character of a string on a new line
 * @str: String to print its characters
 * Return: Void
 */

void puts2(char *str)
{
	int i = strlen(str), x;

	x = 0;
	for (; x < i; x++)
	{
		if (x == 0 || x == 2 || x % 2 == 0)
		{
			_putchar(str[x]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
