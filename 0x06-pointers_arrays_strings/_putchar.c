#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output
 * @c: Character to print
 *
 * Return: Always 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
