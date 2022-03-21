#include "main.h"

/**
 * reset_to_98 - Changes the value of a variable being pointed to
 * @n: The integer parameter argument for the function
 * Return: Void
 */

void reset_to_98(int *n)
{
	int *x = NULL;
	
	x = &n;

	*x = 98;

}
