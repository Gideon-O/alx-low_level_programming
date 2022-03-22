#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _atoi - Converts any integer character to an integer
 * @s: Character array
 * Return: Integer value
 */

int _atoi(char *s)
{
	int x = 0;

	for (; x < strlen(s); x++)
	{
		if (s[x] == '+')
			_putchar('+');
		else if (s[x] == '-')
			_putchar('-');
		if (isdigit(s[x]))
		{
			int y = atoi(s[x]);
		}
	}
	return (y);
}
