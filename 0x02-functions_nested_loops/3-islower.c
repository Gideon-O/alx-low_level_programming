#include "main.h"
#include <ctype.h>

/**
 * _islower - Check Holberton
 *
 * @ch: An input character
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int ch)
{
	int x = 0;

	if (islower(ch))
	{
		x = 1;
	}

	if (isupper(ch))
	{
		x = 0;
	}

	return (x);
}
