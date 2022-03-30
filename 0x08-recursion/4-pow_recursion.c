#include "main.h"

/**
 * _pow_recursion - get the power of a value
 * @x: Value
 * @y: power value
 *
 * Return: Integer value
 * If y < 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
