#include <unistd.h>

/**
 * _putchar - A function that prints a character
 * @c: Character to be printed
 *
 * Return: Always returns 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
