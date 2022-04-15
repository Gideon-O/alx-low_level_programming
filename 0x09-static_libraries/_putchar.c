#include <unistd>

/**
 * _putchar - prints a character
 * @c: Character to be printed
 * Return: Always 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
