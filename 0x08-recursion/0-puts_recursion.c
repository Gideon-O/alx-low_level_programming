#include "main.h"

/**
 * _puts_recursion - prints a character by recursion
 * @s: String to be printed
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}

	else
		_putchar('\n');
}
