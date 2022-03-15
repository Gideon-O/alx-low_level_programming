#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int r = 0;

	int last = print_last_digit(r);

	_putchar(last);
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}
