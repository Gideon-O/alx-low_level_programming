#include "main.h"

/**
 * _sqrt_recursion - Finds the natural squareroot of a number
 * @n: Integer value
 *
 * Return: Integer value
 * If n has not a natural sqrt, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: Square root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);

	return (_sqrt(prev + 1, root));
}
