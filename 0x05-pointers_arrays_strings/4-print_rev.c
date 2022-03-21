#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: A string argument
 * Return: Void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	for (; i >= 0; i--)
	{
		_putchar("%c", s[i]);
	}
	_putchar('\n');
}
