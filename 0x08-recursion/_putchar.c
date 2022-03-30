#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: Character to print
 *
 * Return: Always 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
