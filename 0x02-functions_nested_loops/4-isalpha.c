#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check holberton
 * @c: Input character
 *
 * Description - Takes C for the function _isalpha
 *
 *Return: 1 if alphabetic or 0 ir not alphabetic
 */

int _isalpha(int c)
{
	int x = 0;

	if (isalpha(c))
	{
		x = 1;
	}

	else
	{
		x = 0;
	}

	return (x);
}
