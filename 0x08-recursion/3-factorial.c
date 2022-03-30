#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: Integer number
 *
 * Return: Non-zero value for n > 0
 * 1 for n == 0 and -1 for any n < 0
 */

int factorial(int n)
{
	int x = 0;

	if (n > 0)
	{
		x = n * factorial(n - 1);
		return (x);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
		return (1);
}
