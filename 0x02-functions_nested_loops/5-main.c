#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r = '0';
	int sgn = print_sign(r);

	_putchar(sgn);
	_putchar(',');
	_putchar(r);

	return (0);
}
