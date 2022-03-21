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
	int x = 0;

	for (x = 0; x < i; x++)
	{
		if (x < i / 2)
		{
			continue;
		}
		else
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
