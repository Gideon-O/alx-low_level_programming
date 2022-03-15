#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Calls the function islower
 * Return: Always 0
 */

int main(void)
{
	int c = '0';

	int res = _islower(c);
	_putchar(res);

	return (0);
}
