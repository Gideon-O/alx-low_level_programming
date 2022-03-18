#include "main.h"

/**
 * print_number - Prints a number with putchar function
 *
 * @n: Parameter integer value
 *
 * Return: Void
 */

void print_number(int n)
{
	if (n > 0)
	{
		print_integer(n);
	}

	else if (n == 0)
	{
		_putchar('0');
	}

	else
	{
		_putchar('-');
		print_integer(n * -1);
	}
}

/**
 * print_integer - prints a number
 * @x: Parameter integer argument
 * Return: Void
 */

void print_integer(int x)
{
	int y = 1000000000;

	for (; y >= 1; y = y / 10)
	{
		if (x / y != 0)
		{
			_putchar((x / y) % 10 + '0');
		}
	}
}
