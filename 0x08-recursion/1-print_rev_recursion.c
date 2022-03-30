#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: String to print in reverse
 *
 * Return: VOid
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s)
		i++;

	while (i > 0)
	{
		_putchar(s + i);
		_print_rev_recursion((s + i) - 1);
	}

	_putchar('\n');
}

