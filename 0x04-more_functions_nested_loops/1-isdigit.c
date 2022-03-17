#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks is a character is digit
 * @c: Parameter value for the function _isdigit
 * Return: Interger value
 */

int _isdigit(int c)
{
	int i;

	if (isdigit(c))
	{
		i = 1;
	}

	else
	{
		i = 0;
	}

	return (i);
}
