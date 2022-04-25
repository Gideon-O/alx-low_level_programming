#include <unistd.h>

/**
 * _putchar - A function that prints a character
 * @c: Character value to be printed
 *
 * Return: Always 1
 */

_putchar (char c)
{
	return (write(1, &c, 1));
}
