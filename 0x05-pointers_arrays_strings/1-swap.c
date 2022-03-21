#include "main.h"

/**
 * swap_int - Swaphs the integer values of given variables
 * @a: Parameter argument
 * @b: Parameter argument
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = &b;
	*b = *a;
	*a = c;
}
