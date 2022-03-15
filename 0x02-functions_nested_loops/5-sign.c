#include "main.h"

/**
 * print_sign - Checks for sign of number
 *
 * @n: Function argument
 *
 * Description: Uses the _putchar function
 *
 * Return: 1 if positive -1 is negative and 0 if zero
 */

int print_sign(int n)
{
	int x = '0';

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}

	else if (n < 0)
	{
		x = 1;
		_putchar('-');
	}

	else
	{
		x = 0;
		_putchar('0');
	}

	return (x);
}
