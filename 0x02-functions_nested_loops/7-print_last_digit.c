#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Check holberton
 * @m: Parameter for the function
 *
 * Description: Uses the mudulus operator
 *
 * Return: Always x
 */

int print_last_digit(int m)
{
	int x;

	x = m % 10;
	_putchar(x);

	return (x);
}
