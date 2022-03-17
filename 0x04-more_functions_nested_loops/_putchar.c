#include <unistd.h>

/**
 * _putchar - Prints characters of the value passed
 * @c: Parameter for the function
 * Return: Integer value
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
