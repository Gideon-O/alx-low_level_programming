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
	int i = 1;

	if (y >= 0)
	{
		return (i * _pow_recursion(x, y));
	}

	else
		return (-1);
}
